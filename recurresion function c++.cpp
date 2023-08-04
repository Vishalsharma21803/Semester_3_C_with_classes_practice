#include<iostream>
using namespace std;

int rec(int n){
    int fac;
    if(n>1){
    fac=n*rec(n-1);

    return fac;
    }
    else{
        return 0;
    }
}

int main(){
    cout<<rec(5)<<endl;

    return 0;
}