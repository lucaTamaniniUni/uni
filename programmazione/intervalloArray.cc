#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int fuffi(double a[], int n, int x, int y)
{
    if (x > y)
        return -1;
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x || a[i] > y)
        {
            a[i] = 0;
            cont++;
        }
    }

    return cont;
}
void riempiRandom(double a[], int dim, int max)
{

    for (int i = 0; i < dim; i++)
    {
        a[i] = rand() % (max + 1);
    }
}
void stampaArray(double a[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    srand(time(0));
    int dim = 10;
    double a[dim];
    riempiRandom(a, dim, 100);
    cout<<"l'array iniziale è: ";
    stampaArray(a,dim);
    cout << "il numero di questioni è: " << fuffi(a, dim, 10, 67)<<endl;
    cout << "e ora l'array è: ";
    stampaArray(a, dim);
}