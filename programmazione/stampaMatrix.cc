#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N_COL = 4;
const int N_ROW = 3;

void stampaMatrix(int m[][N_COL], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < N_COL; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void stampaPuntMatrice(int **pMatrice, int nRow, int nCol)
{
    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << pMatrice[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0));

    int matrix[N_ROW][N_COL];

    for (int i = 0; i < N_ROW; i++)
    {
        for (int j = 0; j < N_COL; j++)
        {
            matrix[i][j] = rand() % 11;
        }
    }

    cout << "Prima matrice:" << endl;
    stampaMatrix(matrix, N_ROW);

    // seconda matrice

    int *am[N_ROW];
    int ar[N_ROW][N_COL];
    for (int i = 0; i < N_COL; i++)
    {

        am[i] = ar[i];
    }

    for (int x = 0; x < N_ROW; x++)
    {
        for (int y = 0; y < N_COL; y++)
        {
            am[x][y] = rand() % 11;
        }
    }

    cout << endl
         << "Seconda matrice:" << endl;
    stampaPuntMatrice(am, N_ROW, N_COL);

    return 0;
}