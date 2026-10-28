#include <iostream>
using namespace std;

int main(){
    int n,cont;

    do
    {
        cout<<"inserisci un numero (>0): ";
        cin >> n;
    } while (n<=0);
    while (n>0)
    {
        n/=10;
        cont++;
    }
    cout<<"cifre: "<<cont<<endl;
    return 0;
}