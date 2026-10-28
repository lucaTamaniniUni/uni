#include <iostream>
using namespace std;

int somma(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    int ris = 0;
    if (numero % 2 == 0)
        ris = numero;
    ris += somma(numero - 1);

    return ris;
}

int main()
{
    int num;
    do
    {
        cout << "inserisci un numero: ";
        cin >> num;

    } while (num < 0);

    cout << "la somma dei primi N numeri pari è: " << somma(num) << endl;
    return 0;
}