#include <iostream>
using namespace std;

int potenza(int m, int n, int rus = 0)
{
    rus = m;
    if (n == 0)
    {
        rus = 1;
    }

    return potenza(m*m, n - 1, rus);
}

int main()
{
    int m = 2, n;

    do
    {
        cout << "inserisci m e n: ";
        cin >> m >> n;

    } while (n < 0);

    cout << "la potenza " << m << "^" << n << " è: " << potenza(m, n) << endl;
}