#include <iostream>
using namespace std;

int divisione(int a, int b, int &resto)
{

    int quoziente = 0;
    while (a >= b)
    {
        a -= b;
        quoziente++;
    }
    resto = a;

    return quoziente;
}
int main()
{
    int a, b;
    cout << "inserisci a e b: ";
    cin >> a >> b;
    int resto = 0;

    cout << "quoziente: " << divisione(a, b, resto) << endl;
    cout << "resto: " << resto << endl;
    return 0;
}
