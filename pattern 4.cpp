#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int p=1,rem,s,m=0;
    while(n>0){
        rem=n%10;
        n/=10;
        s=rem*rem;
        m=m+s*p;
        p*=10;

    }
    cout<<m;
}