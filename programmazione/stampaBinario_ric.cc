#include <iostream>
using namespace std;

int binarizza(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    int ris = numero % 2;

    binarizza(numero / 2);
    cout << ris;
    return ris;
}
int main()
{
    int numero;
    do
    {

        cout << "inserisci un numero: ";
        cin >> numero;
    } while (numero < 0);

    cout << "binario: ";
    binarizza(numero);
}