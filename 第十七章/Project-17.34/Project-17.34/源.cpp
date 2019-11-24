#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
#ifdef DEBUG
	bool bool_val = false;
	//�� true �� false ���Ϊ�ַ���
	cout << boolalpha << bool_val << noboolalpha;
	cout << endl;
	cout << false << endl;
	//����������Ľ���ǰ׺
	cout << showbase;
	cout << "dec: " << dec << 1024 << endl;//ʮ���ƣ�Ĭ��
	cout << "oct: " << oct << 1024 << endl;//�˽��ƣ�ǰ׺Ϊ 0
	cout << "hex: " << hex << 1024 << endl;//ʮ�����ƣ�ǰ׺Ϊ 0x ���� 0X
	cout << noshowbase;
	//ʮ�����ƴ�д
	cout << "hex: " << uppercase << hex << 25536 << endl;
	cout << nouppercase;

	//��ӡĬ�Ͼ��ȣ�6λ
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;
	cout.precision(12);//���þ��ȣ�12λ��ʹ�� IO ����ĳ�Ա
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;
	cout << setprecision(3);//���þ��ȣ�3λ��ʹ�������ݷ�
	cout << "Precision: " << cout.precision() << ", Value: " << sqrt(2.0) << endl;

	//�ԷǸ�����ʾǰ�� +
	cout <<dec<< showpos << 12 << endl;

	//ָ��������������
	cout << "default format: " << 100 * sqrt(2.0) << "\n"//Ĭ��
		<< "scentific: " << scientific << 100 * sqrt(2.0) << "\n"//��ѧ������
		<< "fixed decimal: " << fixed << 100 * sqrt(2.0) << "\n"//����ʮ����
		<< "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << "\n"//�����������Ϊʮ������
		<< "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n";//�ظ���������ʮ���ƴ�ӡ

	//ǿ�ƴ�ӡС����
	cout << 10.00 << endl;
	cout << showpoint << 10.0 << noshowpoint << endl;
#endif // DEBUG

	

	//�������
	int i = -16;
	double d = 3.14159;
	std::cout << "i: " << std::setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << left
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n"
	    << right;
	cout << right
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << internal
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n";
	cout << setfill('#')
		<< "i: " << setw(12) << i << "next col" << "\n"
		<< "d: " << setw(12) << d << "next col" << "\n"
		<< setfill(' ');

	//���������ʽ��ʹ֮�ܹ���ȡ�հ׷�
	char ch;
	cin >> noskipws;
	while (cin >> ch)
	{
		cout << ch;
	}
	cin >> skipws;

	system("pause");
	return 0;
}