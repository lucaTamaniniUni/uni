#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void init(int **m, unsigned int r, unsigned int c)
{
    srand(time(0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = rand() % 11;
        }
    }
}

void stampaMatrix(int **m, unsigned int r, unsigned int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void trasponi(int **m, unsigned int r, unsigned int c)
{
    int temp[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[j][i] = m[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            m[i][j] = temp[i][j];
        }
    }
}

int main()
{

    int r = 3, c = 4;
    int *cisco[r];
    int matrice[r][c];

    for (int i = 0; i < r; i++)
    {
        cisco[i] = matrice[i];
    }

    init(cisco, r, c);
    stampaMatrix(cisco, r, c);

    trasponi(cisco, r,c);
    stampaMatrix(cisco,r,c);
    return 0;
}