#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;

    cout << "Basit Hesap Makinesi (Toplama - Cikarma)" << endl;
    cout << "Birinci sayiyi gir: ";
    cin >> sayi1;

    cout << "Islem sec (+ veya -): ";
    cin >> islem;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    if (islem == '+') {
        cout << "Sonuc: " << sayi1 + sayi2 << endl;
    }
    else if (islem == '-') {
        cout << "Sonuc: " << sayi1 - sayi2 << endl;
    }
    else {
        cout << "Gecersiz islem sectiniz!" << endl;
    }

    return 0;
}