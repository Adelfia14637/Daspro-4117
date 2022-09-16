#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int umur = 18;
    float tb = 163.5;
    string nim = "A11.2022.14637";
    char ub = 'M';
    int saldo = 100000;
    char jk = 'P';
    string nama = "Adelfia Milka Novtagravina";
    string ps = "Teknik Informatika";
    string fk = "Ilmu Komputer";



    cout << "Biodata \n" << endl;
    cout << "Nama                   : " << nama << endl;
    cout << "NIM                    : " << nim << endl;
    cout << "Umur                   : " << umur <<endl;
    cout << "Fakultas               : " << fk <<endl;
    cout << "Program Studi          : " << ps << endl;
    cout << "Jenis Kelamin          : " << jk << endl;
    cout << "Tinggi Badan           : " << tb << endl;
    cout << "Ukuran Baju            : " << ub << endl;
    cout << "Saldo Uang             : " << saldo << endl;
    cout << "\n \n " << endl;



    printf("----------------------------------------------------------------- \n\n");
    printf("\t\tMasukan Biodata Anda \n \n");

    string nm[50], nimm[20];
    int umurr;
    float tbadan;

    printf(" \t Nama Lengkap            : ");
    scanf("%s",&nm);

    printf(" \t NIM                     : ");
    scanf("%s",&nimm);

    printf(" \t Umur                    : ");
    scanf("%d",&umurr);

    printf(" \t Tinggi Badan            : ");
    scanf("%f",&tbadan);


    printf("\n");
    printf("\t Nama anda %s \n", nm);
    printf("\t NIM anda %s \n", nimm);
    printf("\t Umur anda %d \n", umurr);
    printf("\t Tinggi Badan anda %f \n", tbadan);
    printf("\t Terimakasih Sudah Mengakses Program Ini \n");
    printf("\n");

    return 0;
}
