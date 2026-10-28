#include <iostream>
using namespace std;

int prelievo(double importo, double &saldo, double *totComms)
{
    importo *= 1.02;
    int is = 1;
    if (importo <= 0)
        is = 0;
    if (saldo >= importo)
    {
        saldo -= importo;
        (*totComms)+=importo;
    }
    else
    {
        is = 0;
    }

    return is;
}

int main()
{
    double importo = 1, conto = 10000, totcomms = 0;
    do
    {
        cout << "inserisci quanto vuoi prelevare: ";
        cin >> importo;
    } while (importo < 1);

    prelievo(importo, conto, &totcomms);
    prelievo(importo, conto, &totcomms);
    prelievo(importo, conto, &totcomms);
    prelievo(importo, conto, &totcomms);
    cout << "conto dopo il prelievo: " << conto << endl;
    cout << "totale commissioni: " << totcomms << endl;
    return 0;
}