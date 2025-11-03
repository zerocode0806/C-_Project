#include <iostream>
using namespace std;

int main() {
    double temperatur;
    string unit;

    cout << "Pilih unit konversi:\n";
    cout << "C -> Celcius\n";
    cout << "F -> Fahrenheit\n";
    cout << "K -> Kelvin\n";

    cout << "Masukkan unit konversi (C/F/K): ";
    cin >> unit;

    if (unit == "C" || unit == "c") {
        cout << "Masukkan suhu dalam Celcius (C): ";
        cin >> temperatur;
        cout << temperatur << " derajat Celcius dalam Fahrenheit adalah " << (temperatur * 1.8) + 32 << " F\n";
        cout << temperatur << " derajat Celcius dalam Kelvin adalah " << temperatur + 273.15 << " K\n";

    } else if (unit == "F" || unit == "f") {
        cout << "Masukkan suhu dalam Fahrenheit (F): ";
        cin >> temperatur;
        cout << temperatur << " derajat Fahrenheit dalam Celcius adalah " << (temperatur - 32) / 1.8 << " C\n";
        cout << temperatur << " derajat Fahrenheit dalam Kelvin adalah " << ((temperatur - 32) / 1.8) + 273.15 << " K\n";

    } else if (unit == "K" || unit == "k") {
        cout << "Masukkan suhu dalam Kelvin (K): ";
        cin >> temperatur;
        cout << temperatur << " derajat Kelvin dalam Celcius adalah " << temperatur - 273.15 << " C\n";
        cout << temperatur << " derajat Kelvin dalam Fahrenheit adalah "  << ((temperatur - 273.15) * 1.8) + 32 << " F\n";
    } else {
        cout << "Pilihan tidak valid!";
    }

    return 0;
}
