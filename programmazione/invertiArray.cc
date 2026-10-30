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

void invertiArray(int a[], int dim)
{

    int temp = 0;
    for (int i = 1; i <= dim / 2; i++)
    {
        temp = a[i - 1];

        a[i - 1] = a[dim - i];

        a[dim - i] = temp;
    }
}
int main()
{
    srand(time(0));
    int dim = 10;
    int a[dim];
    riempiRandom(a, dim, 100);

    stampaArray(a, dim);

    invertiArray(a, dim);
    stampaArray(a, dim);
}