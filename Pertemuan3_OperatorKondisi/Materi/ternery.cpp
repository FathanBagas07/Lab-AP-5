#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int tinggi;
    string hasil;

    cout << "Input tinggi (cm) : ";
    cin >> tinggi;

    hasil = tinggi > 200 ? "Kamu Berbakat jadi pemain basket" : "Kamu pendek";
    
    cout << hasil << endl;

    return 0;
}