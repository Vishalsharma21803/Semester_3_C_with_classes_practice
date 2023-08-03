#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if (x==0){
        cout<<"please enter a number greater than zero";
    }
    else if (x==1){
        cout<<a<<endl;
    }
    else if(x==2){
        cout<<a<<endl;
        cout<<b<<endl;
        
    }
    else if(x>2){
        cout<<a<<endl;
        cout<<b<<endl;
    for(int i=2;i<x;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }


    }
    return 0;

}