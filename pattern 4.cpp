#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int p=1,rem,s;
    while(n>0){
        rem=n%10;
        n/=10;
        s=rem*rem;
        p=p*10+s;

    }
    cout<<p;
}