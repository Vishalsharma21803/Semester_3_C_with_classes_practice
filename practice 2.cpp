#include <iostream>
using namespace std;
int main(){
    int n;
    int rem=0,temp=0;
    cout<<"enter number: ";
    cin>>n;
    
    for(int i=n;i>0;){
        rem=i%10;
        
        if(i==n || i==1 ){
            temp+=rem;
        }
        else{
            continue;
        }
        
    }
    cout<<temp;
    return 0;
    

    
}