// Adelfia Milka Novtagravina | A11.2022.14637 | A11-4117
#include <iostream>

using namespace std;

int main()
{
    /* Buatlah program seperti nomor 5, tentukan nilai maksimal dan minimal dari data yang dimasukkan oleh user,
    sebagai simulasi, data yang Anda masukkan adalah sebagai berikut : 12, 31, 4, 22, 34, 50, 129, 33, 45, 32, 50, -99.
    Data terakhir (-99) tidak dihitung, nama file : loop6.c */
    cout << "Inputkan Nilai di bawah :" << endl;
    int x, maks, mins;
    for(int i = 0;; i++){
    cin >> x;
    if(x > maks){
        maks = x;
    }
    if(x < mins && x != -99){
        mins = x;
    }
    if(x == -99){
        cout << endl;
        cout << "max = " << maks << endl;
        cout << "min = " << mins << endl;
        break;
        }
    }
    return 0;
}
