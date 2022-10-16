#include <iostream>

using namespace std;

int main()
{
    //Cetak deret Fibonacci, bilangan terbesar < 100
    cout << "Deret Fibonacci" << endl;
    int f1 = 0, f2 = 1;

    cout << f1 << endl;

    for(int n = 0; n < 100; n++){
        n = f2 + f1;
        cout << n << "" << endl;
        f2 = f1;
        f1 = n;
    }

    return 0;
}
