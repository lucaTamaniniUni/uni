#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void riempiRandom(int a[], int dim)
{

    for (int i = 0; i < dim; i++)
    {
        a[i] = rand() % 10;
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

float mediaMaxMin(int a[], int dim, int &min, int &max)
{

    float media = 0;
    min = a[0];
    max = a[0];
    for (int i = 0; i < dim; i++)
    {
        media += a[i];
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }
    media /= dim;

    return media;
}

int main()
{
    srand(time(0));
    int dim = 10;
    int min = 0;
    int max = 0;
    int a[dim];
    riempiRandom(a, dim);
    stampaArray(a, dim);
    cout<<"la media è: " <<mediaMaxMin(a, dim, min, max)<<endl;
    cout<<"il minimo è: "<<min<<endl;
    cout<<"il massimo è: "<<max<<endl;
}