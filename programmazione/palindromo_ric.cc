#include <iostream>
#include <cmath>
using namespace std;

int palindromo_ausiliaria(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int cifre = 0;
    bool is = false;
    int i = 10;

    while (is == false)
    {
        if (n / i != 0)
        {
            cifre++;
            i *= 10;
            is = false;
        }
        else
        {
            is = true;
        }
    };
    int ultima_cif = n % 10;
    int ris = ultima_cif * pow(10, cifre);

    ris += palindromo_ausiliaria(n / 10);

    return ris;
}

bool palindromo(int n)
{

    bool is = false;

    if (n == 0)
    {
        is = true;
        return is;
    }
    else if (n / 10 == 0)
    {
        is = true;
        return is;
    }

    int pal = palindromo_ausiliaria(n);
    if (n == pal)

    {
        cout << n << " è uguale a " << pal << endl;
        is = true;
    }
    else
    {
        cout << n << " non è uguale a " << pal << endl;
        is = false;
    }

    return is;
}

int main()
{

    int n = 0;
    cout << "dammi un numero e ti cico se è palindromo: ";
    cin >> n;

    if (palindromo(n))
    {
        cout << "quindi si lo è \n";
    }
    else
    {
        cout << "quindi no non lo è \n ";
    }
    return 0;
}
