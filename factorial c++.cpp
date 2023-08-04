#include <iostream>
using namespace std;
int fac(int n){

    int mul=1;
    if (n==0){
        cout<<"1";
    }
    else{
        for (int i=1;i<=n;i++){
            mul=mul*i;
            
        }
    }
    return mul;
}
int main(){
    cout<<fac(0);

    return 0;
}