#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void riempiRandom(int a[], int dim, int max)
{

    for (int i = 0; i < dim; i++)
    {
        a[i] = rand() % (max + 1);
    }
}

void stampaArray(int a[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int arraycmp(int a[], int b[], int dim)
{
    int cont = 0;

    for (int i = 0; i < dim; i++)
    {
        if (a[i] == b[i])
        {
            cont++;
        }
    }

    return cont;
}

int main()
{
    srand(time(0));
    int dim;
    cout<<"inserisci la dimensione degli array: ";
    cin>>dim;
    int a[dim];
    int b[dim];
    riempiRandom(a, dim, 10);
    riempiRandom(b, dim, 10);
    stampaArray(a, dim);
    stampaArray(b, dim);
    cout << "i due array hanno " << arraycmp(a, b, dim) << " elementi in comune nella posizione i-esima";

    return 0;
}