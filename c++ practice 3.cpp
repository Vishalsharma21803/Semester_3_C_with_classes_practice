#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int tempeven=0,tempodd=0;
    int rem;
    while(n!=0)
{
    rem=n%10;
    n=n/10;
    if(rem%2==0){
        tempeven +=rem;
    }
    else{
        tempodd+=n;
    }
}
cout<<"sum of even"<<tempeven<<endl;
cout<<"sum of odd "<<tempodd<<endl;
return 0;
}