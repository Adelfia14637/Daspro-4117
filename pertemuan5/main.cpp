#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\t Program Menghitung Luas Lingkaran \t\t\t" << endl;
    cout <<endl;
    cout << "\tNama : ADELFIA MILKA NOVTAGRAVINA" << endl;
    cout << "\tNIM : A11.2022.14637" << endl;
    cout <<endl;

    float phi, r, rm, hasil;
    phi = 3.14;
    r = 7;
    rm = phi*r*r;

    cout <<"\ta. Masukkan phi\t\t: ";
    cin >> phi;
    cout <<"\tb. Masukkan jari-jari\t: ";
    cin >> r;
    cout <<"\tc. Masukkan rumus\t: ";
    cin >> rm;
    cout <<"\t--> Hasil Perhitungan\t: " << phi*r*r << endl;
    cout <<endl;
    return 0;
}

