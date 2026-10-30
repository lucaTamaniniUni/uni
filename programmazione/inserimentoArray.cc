#include <iostream>
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

void inserisci(int a[], int dim, int val, int index)
{
    for (int i = index+1; i < dim; i++)
    {
        if (i == dim - 1)
            a[dim - i] = a[dim - 1 - i];
    }
    a[index] = val;
}

int main()
{
    srand(time(0));

    int dim = 10;
    int a[dim];

    riempiRandom(a, dim, 100);
    stampaArray(a, dim);
    inserisci(a, dim, 10, 3);
    stampaArray(a,dim);
}