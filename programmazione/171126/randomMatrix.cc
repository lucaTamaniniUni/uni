#include <iostream>
#include <cstdlib>
using namespace std;

int **generate_matrix(int rows, int cols)
{
    int **matrix = new (nothrow) int *[rows];
    if (matrix == NULL)
    {
        delete[] matrix;
        exit(1);
    }

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new (nothrow) int[cols];
        if (matrix[i] == NULL)
        {
            for (int e = 0; e < i; e++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }

    return matrix;
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    if (argc != 3)
    {
        cout << "negro" << endl;
        exit(67);
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    int **matrix = generate_matrix(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
