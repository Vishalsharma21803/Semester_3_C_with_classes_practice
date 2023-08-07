#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int rev=0;
    int rem;
    while(n!=0)
{
    rem=n%10;
    rev=rev*n+rem;
    n=n/10;
}
cout<<"rev";
return 0;
}