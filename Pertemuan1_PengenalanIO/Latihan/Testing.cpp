#include <iostream>
using namespace std;
main () {
    system ("cls");
    int input, i, j;
    cout << "Input Besar Persegi : ";
    cin >> input;
    for ( i = 0; i < input; i++)
    {
        for ( j = 0; j < input; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}