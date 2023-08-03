#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=0;i<x;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;


    }
    return 0;

}