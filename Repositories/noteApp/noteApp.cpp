#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int vize, final;
    int ortalama;

    cout << "Vize notunuzu giriniz :" << endl;
    cin >> vize;

    cout << "Final notunuzu giriniz :" << endl;
    cin >> final;

    ortalama = (vize + final) / 2;
    cout << "Ortalamanız :" << ortalama << endl;

    if (ortalama > 50) {
        cout << "Tebrikler geçtiniz:)" << endl;

    }

    else {
        cout << "Maalesef,kaldınız:(" << endl;
    }

    cout << "Harf notunuzu hesaplayalım" << endl;
    cout << "Vize notunuzu tekrar giriniz :" << endl;

    cin >> vize;

    if (100 > vize >= 90) {
        cout << "AA  Başarılı" << endl;
    }

    else if (89 > vize && 80 <= vize) {
        cout << "BA  Başarılı" << endl;
    }

    else if (79 > vize && 75 <= vize) {
        cout << "BB  Başarılı" << endl;
    }

    else if (74 > vize && 70 <= vize) {
        cout << "BC  Başarılı" << endl;
    }

    else if (69 > vize && 60 <= vize) {
        cout << "CC  Başarılı" << endl;
    }

    else if (59 > vize && 50 <= vize) {
        cout << "DC  Kosullu Başarılı" << endl;
    }

    else if (49 > vize && 40 <= vize) {
        cout << "DD  Başarısız" << endl;
    }

    else if (vize <= 39) {
        cout << "Başarısız" << endl;
    }




    cout << "Final notunuzu tekrar giriniz :" << endl;

    cin >> final;

    if (100 > final >= 90) {
        cout << "AA  Başarılı" << endl;
    }

    else if (89 > final && 80 <= final) {
        cout << "BA  Başarılı";
    }

    else if (79 > final && 75 <= final) {
        cout << "BB  Başarılı";
    }

    else if (74 > final && 70 <= final) {
        cout << "BC  Başarılı";
    }

    else if (69 > final && 60 <= final) {
        cout << "CC  Başarılı";
    }

    else if (59 > final && 50 <= final) {
        cout << "DC  Koşullu Başarılı";
    }

    else if (49 > final && 40 <= final) {
        cout << "DD  Başarısız";
    }

    else if (final <= 39) {
        cout << "Başarısız";
    }

}