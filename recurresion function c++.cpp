#include<iostream>
using namespace std;

int rec(int n){
    int fac=n;
    
    fac=fac*rec(n-1);
        
        
    
    return fac;
}

int main(){
    cout<<rec(5)<<endl;

    return 0;
}