#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int num = 0;
int num2 = 0;
char process;
char process2;
int result;

int main()
{
	int toplama(int num, int num2);
	int cikartma(int num, int num2);
	int carpma(int num, int num2);
	int bolme(int num, int num2);

	setlocale(LC_ALL, "Turkish");

	do
	{

	cout << "İşlem yapmak istediğiniz sayıları giriniz:" << endl;
	cin >> num >> num2;

	cout << "Yapmak istediğiniz işlem nedir?" << endl;
	cout << "a.Toplama" << endl;
	cout << "b.Çıkartma" << endl;
	cout << "c.Çarpma" << endl;
	cout << "d.Bölme" << endl;
	cin >> process;

	switch (process)
	{
	case 'a':cout << toplama(num, num2) << endl; 
		cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
		cin >> process2;
		break;
	case 'b':cout<<cikartma(num, num2) << endl;
		cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
		cin >> process2;
		break;
	case 'c':cout<<carpma(num, num2) << endl;
		cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
		cin >> process2;
		break;
	case 'd':cout<<bolme(num, num2) << endl;
		cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
		cin >> process2;
		break;
	default:
		break;
	}

	} while (process2 == 'e');





}

int toplama(int num, int num2) 
{
	result = num + num2;
	return result;
}

int cikartma(int num , int num2)
{
	result = num - num2;
	return result;
}

int carpma(int num , int num2)
{
	result = num * num2;
	return result;
}

int bolme(int num, int num2)
{
	result = num / num2;
	return result;
}