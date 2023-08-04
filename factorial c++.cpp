#include <iostream>
using namespace std;
int fac(int n){

    int mul=1;
    for (int i=1;i<=n;i++){
        mul=mul*i;
        
    }
    return mul;
}
int main(){
    cout<<fac(2);

    return 0;
}