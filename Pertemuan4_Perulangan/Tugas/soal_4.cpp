#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Aturan: Sebuah baris berisi sebuah angka n (1<=N<=10000). Maka huruf o,i dan tanda ! akan\nditampilkan sebanyak n" << endl;
    cout << "Input nilai n : ";
    int n;
    cin >> n;

    string kata="Hore!";
    for (auto c: kata) {
        if (c=='o') {
            int i=0;
            while (i<=n-1)
            {
                cout << c;
                i++;
            }
            
        }
        else if (c=='e') {
            int i=0;
            while (i<=n-1)
            {
                cout << c;
                i++;
            }
        }
        else if (c=='!')
        {
            int i=0;
            while (i<=n-1)
            {
                cout << c;
                i++;
            }
        }
        else {
            cout << c;
        }
    }
    
    return 0;
}