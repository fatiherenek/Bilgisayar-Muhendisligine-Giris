#include <iostream>
using namespace std;

float carpma(float a, float b) {
    return a * b;
}

float bolme(float a, float b) {
    if (b == 0) {
        cout << "Hata: 0'a bolme yapilamaz!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float sayi1, sayi2;
    char islem;

    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    cout << "Islem secin (* veya /): ";
    cin >> islem;

    switch (islem) {
        case '*':
            cout << "Sonuc: " << carpma(sayi1, sayi2) << endl;
            break;
        case '/':
            cout << "Sonuc: " << bolme(sayi1, sayi2) << endl;
            break;
        default:
            cout << "Gecersiz islem!" << endl;
            break;
    }

    return 0;
}