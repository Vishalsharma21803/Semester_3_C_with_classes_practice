#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter search: ";
    cin>>x;
    int sum=0;
    for(int j=0;j<n;j++){
        if(j==x){
            sum=j;
            break;
        }
        else{
            sum=0;
        }
    }
    if(sum!=0){
        cout<<sum;
    
    }
    else{
        cout<<"not found";
    }
    return 0;
}