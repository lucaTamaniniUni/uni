#include <iostream>
using namespace std;

int sommaCifre(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    int ris = numero % 10;
    ris += sommaCifre(numero / 10);

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

    cout << "le cifre sommate sono: " << sommaCifre(num) << endl;
}