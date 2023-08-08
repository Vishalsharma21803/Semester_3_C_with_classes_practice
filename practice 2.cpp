#include <iostream>
using namespace std;
int main(){
    int n;
    int rem=0,temp=0;
    cout<<"enter number: ";
    cin>>n;
    
    for(int i=n;i>0; ){
        rem=i%10;
        
        if(i==n ){
            temp+=rem;
        }
        else{
            continue;
        }
        i/=10;
    }
    cout<<temp;
    return 0;
    

    
}