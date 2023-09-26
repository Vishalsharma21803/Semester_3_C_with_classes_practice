#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int min=0,minindex=0;
    for(int j=0;j<n;j++){
        min=arr[j];
        minindex=j;

        for(int k=j+1;k<n;k++){
            if(arr[k]<min){
                min=arr[k];
                minindex=k;
            }
        }
        min=arr[minindex];

    }


    cout<<min;

return 0;
}