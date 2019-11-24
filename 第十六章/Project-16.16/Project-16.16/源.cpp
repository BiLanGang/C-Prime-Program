#include<iostream>
#include<memory>
#include<initializer_list>
#include<utility>
#include<algorithm>
#include<string>
using namespace std;
// vector�����ռ�������
template <typename T> 
class Vec {
public:
	//���캯��
	Vec() :
		elements(nullptr), first_free(nullptr), cap(nullptr) { }
	Vec(initializer_list<T>);
	Vec(const T &val, size_t n);

	//�������캯��
	Vec(const Vec&);
	//������ֵ�����
	Vec& operator=(const Vec&);
	//�ƶ����캯��
	Vec(Vec&&) noexcept;
	//�ƶ���ֵ�����
	Vec& operator=(Vec&&) noexcept;
	~Vec();

	//�����ӿ�
	bool empty() const { return elements == first_free; }
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }

	T* begin() const { return elements; }//��Ԫ�ص�����

	T* end() const { return first_free; }//β�������

	void push_back(const T&);
	void push_back(T&&);
	void pop_back();

	T& operator[](size_t);//�����±������
	const T& operator[](size_t) const;
private:
	//���ݳ�Ա
	static allocator<T> alloc;//�ռ������
	T *elements;//ָ��������Ԫ��
	T *first_free;//ָ�����һ��ʵ��Ԫ��֮���λ��
	T *cap;//ָ�������ڴ�ĩβ֮���λ��

	//��������
	pair<T*, T*>
		alloc_n_copy(const T*, const T*);
	void chk_n_alloc();
	void free();
	void reallocate();
};

//��̬��Ա�����ⶨ��(Ĭ��ֵ��ʼ��)
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
	//���ܸ�deallocate����һ����ָ��
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

// ����������
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