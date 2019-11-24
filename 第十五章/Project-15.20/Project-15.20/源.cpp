// .h�ļ�
class Base
{
public:
	void pub_mem();
protected:
	int prot_mem();
private:
	char priv_mem();
};

struct Pub_Derv : public Base
{
	int f() { return prot_mem(); }
	void memfcn(Base &b) { b = *this; }
};

struct Pro_Derv : protected Base
{
	int f() { return prot_mem(); }
	void memfcn(Base &b) { b = *this; }
};

struct Priv_Derv : private Base
{
	int f1() { return prot_mem(); }
	void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Derv
{
	int use_base() { return prot_mem(); }
	void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Pro : public Pro_Derv
{
	//   void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Private : public Priv_Derv
{
	//   void memfcn(Base &b) { b = *this; }
};

//.cpp�ļ�
int main()
{
	Pub_Derv d1;
	Priv_Derv d2;
	Pro_Derv d3;
	Derived_from_Public dd1;
	Derived_from_Pro dd2;
	Derived_from_Private dd3;

	Base *p = &d1;          // d1��������Pub_Derv���Ϸ�
// ����Ǳ�����˽�м̳У��������಻�������ת��
//    p = &d2;              // d2��������Priv_Derv,�Ƿ�
//    p = &d3;              // d3��������Prot_Derv���Ƿ�
	p = &dd1;               // dd1��������Derived_from_Public���Ϸ�
//    p = &dd2;             // dd2��������Derived_from_Private���Ƿ�
//    p = &dd3;             // dd3��������Derived_from_Protected���Ƿ�
	return 0;
}