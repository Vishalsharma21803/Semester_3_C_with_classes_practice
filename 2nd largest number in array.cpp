#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int j;
    for(j=0;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        else{
            continue;
        }
    }
    cout<<"max: "<<max;
    return 0;
}