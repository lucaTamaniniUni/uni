#include <iostream>
using namespace std;

int divisione(int a, int b, int &resto)
{
    if (a < b)
    {
        resto = a;
        return 0;
    }
    int q = divisione(a - b, b, resto);
    return q +1;
}

int main()
{

    int a = 11, b = 2, resto = 0;

    cout << "la divisione è: " << divisione(a, b, resto) << endl
         << "resto: " << resto;
    return 0;
}