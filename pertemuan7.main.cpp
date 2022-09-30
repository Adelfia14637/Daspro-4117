#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "\t\t\ Tugas Pertemuan 7 \t\t" << endl;
    cout << "Nama : Adelfia Milka Novtagravina \t\t \nNIM  : A11.2022.14637 "<< endl;
    cout << "QUESTIONS \n1. Bilangan genap antara 25 - 50 " << endl;
    cout << "\t ANSWER : " << endl;
    int a;
    cout << "\t Masukkan angka :  " ;
    cin >> a;
    if ( a > 25 && a < 50 && a % 2 == 0 ) {
    cout << "\t Bilangan sesuai!" << endl;
    }
    else {
    cout << "\t Bilangan tidak sesuai " << endl;
    }
     cout << "2. Bilangan ganjil antara lebih dari 13 atau kurang dari 5 " << endl;
    cout << "\t ANSWER : " << endl;
    int x;
    cout << "\t Masukkan angka :  " ;
    cin >> x;
    if ( x > 13 || x < 5 && x % 2 == 1 ) {
    cout << "\t Bilangan sesuai!" << endl;
    }
    else {
    cout << "\t Bilangan tidak sesuai " << endl;
    }
     cout << "3. Bilangan bulat antara 25-50 atau bilangan ganjil antara 3-15 " << endl;
    cout << "\t ANSWER : " << endl;
    int y;
    cout << "\t masukan angka :  " ;
    cin >> y;
    if ( y > 25 && a < 50 || y > 3 && y < 15 && a % 2 == 0 ) {
    cout << "\t Bilangan sesuai!" << endl;
    }
    else {
    cout << "\t Bilangan tidak sesuai " << endl;
    }
    cout<< endl;
    int jurusan;
    cout<< "Jurusan\n1. Teknik Infomatika \n2. Sistem Informasi \n3. DKV"<< endl;
    cout<< "Masukkan jurusan anda : ";
    cin >> jurusan;
        if (jurusan==1){
            cout << "Jurusan Anda adalah Teknik Informatika" << endl;
        }
        if (jurusan==2){
            cout << "Jurusan Anda adalah Sistem Informasi" << endl;
        }
        if (jurusan==3){
            cout << "Jurusan Anda adalah DKV" << endl;
        }
    else {
            cout << "Jurusan Anda tidak diketahui"<<endl;
    }
    return 0;
}
