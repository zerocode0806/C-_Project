#include <iostream>

using namespace std;

int main() {
    float r, a, t, x, y, z;
    string operasi;

    cout << "Pilih opsi perhitungan \n";
    cout << "1. keliling lingkaran \n";
    cout << "2. luas lingkaran \n";
    cout << "3. luas segitiga \n";
    cout << "4. keliling segitiga \n";
    cout << " \n";

    cout << "Masukkan pilihan 1, 2, 3, 4 : ";
    cin >> operasi;

    if (operasi == "1") {
        cout << "Masukkan jari jari (r) : ";
        cin >> r;
        cout << "Keliling lingkaran dengan jari jari "<<r<<" adalah "<< 2 * 3.14 * r;
    } else if (operasi == "2") {
        cout << "Masukkan jari jari (r) : ";
        cin >> r;
        cout << "Luas lingkaran dengan jari jari "<<r<<" adalah "<< 3.14 * r * r;
    } else if (operasi == "3") {
        cout << "Masukkan alas (a) : ";
        cin >> a;
        cout << "Masukkan tinggi (t) : ";
        cin >> t;
        cout << "Luas segitiga dengan alas "<<a<<" dan tinggi " <<t<< " adalah "<< 0.2 * a * t;
    } else if (operasi == "4") {
        cout << "Masukkan panjang sis a : ";
        cin >> x;
        cout << "Masukkan panjang sis b : ";
        cin >> y;
        cout << "Masukkan panjang sis c : ";
        cin >> z;
        cout << "Keliling segitiga dengan panjang sisi a "<<x<<", sisi b "<<y<< ", dan sisi c "<<z<< " adalah "<< x + y + z; 
    }
    return 0;

}
