#include < iostream >
#include < locale.h >
#include < cstdlib >
#include < ctime >

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    int myNum;
    char process;
    bool process2 = true;

    do
    {

    
    cout << "1 ile 10 arasında bir sayı tutun ve tuttuğunuz sayıyı giriniz :" << endl;
    cin >> myNum;

    srand(static_cast<unsigned int>(time(0))); // Rastgele sayı üreteci başlat

    int randNum = rand() % 10 + 1; // 1-10 arası rastgele sayı üret
    cout << "Bilgisayarın tuttuğu sayı:" << randNum << endl;

    if (randNum == myNum) {
        cout << "Tebrikler kazandınız" << endl;
        cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
        cin >> process;
    }

    else {
        cout << "Üzgünüz kaybettiniz" << endl;
        cout << "Devam etmek istiyor musunuz ?(e / h)" << endl;
        cin >> process;
    }

    } while (process2 == true && process == 'e');
}