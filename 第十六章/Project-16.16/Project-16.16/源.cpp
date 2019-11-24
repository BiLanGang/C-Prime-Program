#include<iostream>
#include<memory>
#include<initializer_list>
#include<utility>
#include<algorithm>
#include<string>
using namespace std;
// vector容器空间分配策略
template <typename T> 
class Vec {
public:
	//构造函数
	Vec() :
		elements(nullptr), first_free(nullptr), cap(nullptr) { }
	Vec(initializer_list<T>);
	Vec(const T &val, size_t n);

	//拷贝构造函数
	Vec(const Vec&);
	//拷贝赋值运算符
	Vec& operator=(const Vec&);
	//移动构造函数
	Vec(Vec&&) noexcept;
	//移动赋值运算符
	Vec& operator=(Vec&&) noexcept;
	~Vec();

	//公共接口
	bool empty() const { return elements == first_free; }
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }

	T* begin() const { return elements; }//首元素迭代器

	T* end() const { return first_free; }//尾后迭代器

	void push_back(const T&);
	void push_back(T&&);
	void pop_back();

	T& operator[](size_t);//重载下标运算符
	const T& operator[](size_t) const;
private:
	//数据成员
	static allocator<T> alloc;//空间分配器
	T *elements;//指向容器首元素
	T *first_free;//指向最后一个实际元素之后的位置
	T *cap;//指向分配的内存末尾之后的位置

	//辅助函数
	pair<T*, T*>
		alloc_n_copy(const T*, const T*);
	void chk_n_alloc();
	void free();
	void reallocate();
};

//静态成员的类外定义(默认值初始化)
template <typename T> allocator<T> Vec<T>::alloc;

template <typename T>
inline
pair<T*, T*>
Vec<T>::alloc_n_copy(const T *b, const T *e)
{
	auto data = alloc.allocate(e - b);
	return { data, uninitialized_copy(b, e, data) };
}

template <typename T>
inline
void Vec<T>::chk_n_alloc() {
	if (first_free == cap)
		reallocate();
}

template <typename T>
inline
void Vec<T>::free() {
	//不能给deallocate传递一个空指针
	if (elements) {
		for (auto q = first_free; q != elements; )
			alloc.destroy(--q);
		alloc.deallocate(elements, cap - elements);
	}
}

template <typename T>
inline
void Vec<T>::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto first = alloc.allocate(newcapacity);
	auto dest = first;
	auto elem = elements;

	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, move(*elem++));

	free();

	elements = first;
	first_free = dest;
	cap = elements + newcapacity;
}

template <typename T>
inline
Vec<T>::Vec(initializer_list<T> lst) {
	auto data = alloc_n_copy(lst.begin(), lst.end());
	elements = data.first;
	cap = first_free = data.second;
}


template <typename T>
inline
Vec<T>::Vec(const T &val, size_t n) {
	auto data = alloc.allocate(n);
	elements = data;
	uninitialized_fill_n(data, n, val);
	cap = first_free = elements + n;
}


template <typename T>
inline
Vec<T>::Vec(const Vec &v) {
	auto data = alloc_n_copy(v.begin(), v.end());
	elements = data.first;
	cap = first_free = data.second;
}

template <typename T>
inline
Vec<T>& Vec<T>::operator=(const Vec &v) {
	auto newdata = alloc_n_copy(v.begin(), v.end());
	free();
	elements = newdata.first;
	cap = first_free = newdata.second;

	return *this;
}

template <typename T>
inline
Vec<T>::Vec(Vec &&v) noexcept :
	elements(v.elements), first_free(v.first_free), cap(v.cap)
{
	cout << "move constructor version" << endl;
	v.elements = v.first_free = v.cap = nullptr;
}


template <typename T>
inline
Vec<T>& Vec<T>::operator=(Vec &&v) noexcept {
	if (this != &v) {
		free();
		elements = v.elements;
		first_free = v.first_free;
		cap = v.cap;
		v.elements = v.first_free = v.cap = nullptr;
	}
	return *this;
}

template <typename T>
inline
Vec<T>::~Vec() {
	free();
}


template <typename T>
inline
void Vec<T>::push_back(const T &val) {
	chk_n_alloc();
	alloc.construct(first_free++, val);
}

template <typename T>
inline
void Vec<T>::push_back(T &&val) {
	cout << "move push_back version" << endl;
	chk_n_alloc();
	alloc.construct(first_free++, move(val));
}

template <typename T>
inline
void Vec<T>::pop_back() {
	if (!empty())
		alloc.destroy(--first_free);
}

template <typename T>
inline
T& Vec<T>::operator[](size_t i) {
	return elements[i];
}

template <typename T>
inline
const T& Vec<T>::operator[](size_t i) const {
	return elements[i];
}

// 测试主函数
int main()
{
	Vec<string> svec = { "a","an","the","and" };
	cout << svec[2] << endl;
	Vec<int> ivec;
	ivec.push_back(2);
	ivec.push_back(5);
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << " ";
	cout << endl;
	system("pause");
	return 0;

}