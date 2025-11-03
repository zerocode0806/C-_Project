#include <iostream>

using namespace std;

int main() {
    double x, y;
    char operasi;
    
    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan angka kedua: ";
    cin >> y;
    cout << "Pilih operasi (+, -, *, /) : ";
    cin >> operasi;
    
    switch (operasi) {
        case '+' :
        cout << "Hasil dari "<<x<<" + "<<y<<" = "<<x+y;
        break;
        
        case '-' :
        cout << "Hasil dari "<<x<<" - "<<y<<" = "<<x-y;
        break;
        
        case '*' : 
        cout << "Hasil dari "<<x<<" x "<<y<<" = "<<x*y;
        break;

        case '/' :
        cout << "Hasil dari "<<x<<" / "<<y<<" = "<<x/y;
        break;

        default :
        cout << "Operasi tidak dikenali!";
    }

    return 0;
}
