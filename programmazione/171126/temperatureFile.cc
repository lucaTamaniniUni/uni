#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        cout << "negro";
    }

    fstream file;
    file.open(argv[1], ios::in);

    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    int temps[m];

    int cont = 0;
    if (file.eof() || file.fail())
    {
        cout << "file merda";
        exit(1);
    }

    for (int i = 0; i < m; i++)
    {
        file >> temps[i];
    }
    int temp = 0;
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (temps[j] > temps[j + 1])
            {
                temp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp;
            }
        }
    }

    for (int i = m; i >n; i--)
    {
        cout<<temps[i];
    }
    

    return 0;
}
