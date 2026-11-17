#include <iostream>
#include <cstdlib>
using namespace std;

int *generate_numbers(int n)
{
    int *rr = new (nothrow) int[n];

    if(rr == NULL){
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        rr[i] = rand() % 100;
    }

    return rr;
}

int main(int argc, char *argv[])
{
    srand(time(0));
    if (argc != 2)
    {
        cout << "negro"<<endl;
        exit(67);
    }

    int n = atoi(argv[1]);

    int * nigger = generate_numbers(n);
    for (int i = 0; i < n; i++)
    {
        cout<<nigger[i]<<" ";
    }

    delete[] nigger;
    
    return 0;
}
