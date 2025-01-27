#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

int depositedmoney;
int withdrawnedmoney;
int passw, passw2, accountPassw;
int attempts = 3;
int attempts2 = 3;
int accBalance = 10000;
string name;
string name2;

void kayitOl();
void oturumAc();
void paraYatirmak();
void paraCekmek();


int main()
{
	setlocale(LC_ALL, "Turkish");

	

	char process;
	char signUp;
	

	cout << "X Bankasına Hoşgeldiniz!" << endl;
	cout << "Öncelikle kayıt olun." << endl;
	cout << "Kayıt olmak için (a)" << endl;
	cin >> signUp;

	switch (signUp)
	{
	case 'a':
		kayitOl();
		break;
	default:
		break;
	}

	if (attempts > 0)
	{
		cout << "Bakiyeniz 10.000 TL'dir!" << endl;
		cout << "lütfen yapmak istediğiniz işlemi seçiniz:" << endl;
		cout << "1)Para yatırmak(m)" << endl;
		cout << "2)Para çekmek(t)" << endl;
		cin >> process;


		switch (process)
		{
		case 'm':
			paraYatirmak();
			break;
		case 't':
			paraCekmek();
			break;
		default:
			break;
		}
	}

}

void kayitOl() {

	cout << "Adınızı giriniz:" << endl;
	cin >> name;

	cout << "Şifrenizi oluşturun:" << endl;
	cin >> passw;

	cout << "Lütfen sifreyi tekrar giriniz:" << endl;
	cin >> passw2;

	if (passw != passw2)
	{
		while (passw != passw2 && attempts >= 0)
			{
				cout << "Hatalı şifre girdiniz.Lütfen tekrar deneyin" << endl;
				cout << attempts << " Hakkınız kaldı";
				cout << "Şifreyi tekrardan giriniz:";
				cin >> passw2;
				attempts--;
			}	
	}

	else
	{
		cout << "Başarıyla giriş yapıldı.";
	}

	
		cout << "Oturuma giriş yapalım!";
		oturumAc();
	
}

void oturumAc() {
	cout << "Adınızı giriniz:" << endl;
	cin >> name2;

	if (name == name2)
	{
		cout << "Kullanıcı bulundu.Lütfen şifrenizi giriniz:";
		cin >> accountPassw;

		if (passw != accountPassw)
		{
			while (passw != accountPassw && attempts2 >= 0)
			{
				cout << "Hatalı şifre girdiniz.Lütfen tekrar deneyin" << endl;
				cout << attempts2 << "Hakkınız kaldı";
				cout << "Şifreyi tekrardan giriniz:";
				cin >> accountPassw;
				attempts2--;

			}
		}

		else
		{
			cout << "Başarıyla giriş yapıldı.";
		}
	}


}

void paraYatirmak() {
	cout << "Yatırmak istediğiniz miktarı giriniz:" << endl;
	cin >> depositedmoney;

	accBalance = accBalance + depositedmoney;
	cout << "Hesabınızdaki para;" << accBalance;
}

void paraCekmek() {
	cout << "Çekmek istediğiniz miktarı giriniz:" << endl;
	cin >> withdrawnedmoney;

	accBalance = accBalance - withdrawnedmoney;
	if (accBalance > 0)
	{
		cout << "Hesabınızdaki para:" << accBalance;
	}

	else
	{
		accBalance = accBalance * -1;
		cout << "Bankaya borcunuz var!! Borç tutarınız:" << accBalance;
	}
}


