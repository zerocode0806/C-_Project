#include <iostream>

using namespace std;

int main() {
    int x, y;
    string operasi;
    
    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan angka kedua: ";
    cin >> y;
    cout << "Pilih operasi (+, -, *, /) : ";
    cin >> operasi;
    
    if (operasi == "+") {
        cout << "Hasil dari "<<x<<" + "<<y<<" = "<<x+y;
    } else if (operasi == "-") {
        cout << "Hasil dari "<<x<<" - "<<y<<" = "<<x-y;
    } else if (operasi == "*") {
        cout << "Hasil dari "<<x<<" x "<<y<<" = "<<x*y;
    } else if (operasi == "/") {
        cout << "Hasil dari "<<x<<" / "<<y<<" = "<<x/y;
    }
    return 0;
}
