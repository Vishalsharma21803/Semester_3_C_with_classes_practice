#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int rem,temp=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        temp=temp*10+rem*rem;
    }
    cout<<temp;
    return 0;
}