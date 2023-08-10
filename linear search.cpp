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
    for(int j=0;j<n;j++){
        if(j==x){
            cout<<j;
            break;
        }
        else{
            cout<<"not found";
        }
    }
    return 0;
}