#include <iostream>

using namespace std;

int main() {
    string username, password, user_input, pass_input ;

    username = "ubed123";
    password = "12345678";

    cout << "Masukkan username: ";
    cin >>  user_input;
    cout << "Masukkan password: ";
    cin >> pass_input;

    if (user_input == username && pass_input == password) {
        cout << "Selamat datang " << username;
    } else {
        cout << "Username atau password salah, mohon untuk periksa lagi";
    }

    return 0;
}
