// Adelfia Milka Novtagravina | A11.2022.14637 | A11-4117
#include <iostream>

using namespace std;

int main()
{
    /* Buatlah program untuk mencetak rata-rata angka integer dari 1 hingga 20 menggunakan
    loop for, nama file : loop4.c */
    int i, sum, rata;
    sum = 0;
    for(i = 1; i <= 20; i++){
        sum = sum + i;
        rata = sum / i;
        cout << i << endl;
    }
    cout << "\n";
    cout << "jumlah     = " << sum << endl;
    cout << "rata-rata  = " << rata << endl;

    return 0;
}
