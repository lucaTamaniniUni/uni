#include <iostream>
using namespace std;
void test(int& a, int b)
{
int c = 2 * (a%2 == 0) – (a%2 != 0);
a += c;
a /= 2;
b *= a;
}

int main()
{
int x = 5, y = 4;
test(x, y);
cout << x << " " << y << endl; // x = 5 + l'abominio/2;; y = 4
test(y, x);
cout << x << " " << y << endl; // x = 5;; y = 4+ l'abominio/2
return 0 ;
}