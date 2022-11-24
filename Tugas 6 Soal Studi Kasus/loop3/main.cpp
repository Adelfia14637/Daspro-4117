// Adelfia Milka Novtagravina | A11.2022.14637 | A11-4117
#include <iostream>

using namespace std;

int main()
{
    /*Buatlah program untuk mencetak angka integer dari 100 hingga 1 menggunakan loop for,
    dan akan berhenti (break) bila mencapai angka 55, nama file : loop3.c */
    int i;
    for(i = 100; i > 0; i--){
        if(i == 54){
            break;
        }
        cout << i << endl;
    }
    return 0;
}
