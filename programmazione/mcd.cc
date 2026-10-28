#include <iostream>
using namespace std;

int mcd(int a,int b){
    if(b==0){
        return a;
    }
        int r = a%b;
    

    return mcd(b,r);
}

int main(){
    int n= 24,m= 36;
    cout<<mcd(n,m)<<endl;
}