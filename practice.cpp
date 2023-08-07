#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int rem,rem2,temp=0,temp2=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        temp=temp*10+rem*rem;
    }
    while(rem!=0){
        rem2=n%10;
        rem/=10;
        temp2=temp2*10+rem2*rem2;
    }
    cout<<temp2;
    return 0;
}