#include <iostream>

using namespace std;

int main()
{
    cout << "\t\tHallo, Saya Sedang Belajar Cin \n \n" << endl;

    string nama, nim;
    int umur;
    float tb;
    char jk;

    cout << "\tMasukan Nama           : ";
    getline (cin, nama);

    cout << "\tMasukan NIM            : ";
    cin >> nim;

    cout << "\tMasukan Umur           : ";
    cin >> umur;

    cout << "\tTinggi Badan           : ";
    cin >> tb;

    cout << "\tJenis Kelamin          : ";
    cin >> jk;
    cout << "\n";

    cout << "\tHallo " << nama << "!!!" << endl;
    cout << "\tNIM kamu " << nim << endl;
    cout << "\tUsia " << umur << " tahun" << endl;
    cout << "\tTinggi badan " << tb << "cm" << endl;
    cout << "\tJenis Kelamin " << jk << "\n" << endl;
    cout << "\tTerimakasih Sudah Mengakses Program Ini" << endl;

    return 0;
}
