// Adelfia Milka Novtagravina | A11.2022.14637 | A11-4117
#include <iostream>

using namespace std;

int main()
{
    /*Buatlah program untuk mencetak angka integer dari 100 hingga 1, tetapi yang genap saja dengan menggunakan
    statement continue, nama file : loop2.c */
    int i;
    for(i = 100; i > 0; i--){
        if(i % 2 == 1){
            continue;
        }
        cout << "Nilai genap adalah " << i << endl;
    }
    return 0;
}
