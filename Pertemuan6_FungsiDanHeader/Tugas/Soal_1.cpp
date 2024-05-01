#include <iostream>
#include <typeinfo>
using namespace std;

int tipe;

string fizzBuzz(int deret) {
    string hasil;
    if (deret % 3 == 0 && deret % 5 == 0) {
        hasil = "FizzBuzz";
    }
    else if (deret % 3 == 0) {
        hasil = "Fizz";
    }
    else if (deret % 5 == 0) {
        hasil = "Buzz";
    }
    else {
        hasil = to_string(deret);
        tipe = deret;
    }

    return hasil;
}

string deretSegitiga(int input) {   
    string output;
    for (int i = 1; i <= input; i++) {
        int deret = i * (i+1);
        output += fizzBuzz(deret);
        if ( i != input) {
        string hasil = ", ";
        output += hasil;
        }
    }
    return output;
}
int main() {
    system("cls");

    char ulang;
    do { 
    cout << "Masukkan Angka : ";
    int input;
    cin >> input;

    while (input < 0 || input >= 100)
    {
        cout << "Input tidak valid, berikan nilai dengan rentang 3 - 100\n";
        cout << "Masukkan Angka : ";
        cin >> input;
    }
    
    cout << deretSegitiga(input) << endl;
    cout << "Tipe data " << tipe << " adalah " << typeid(tipe).name() << endl;

    cout << "Ulang Program (Y/T): ";
    cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}