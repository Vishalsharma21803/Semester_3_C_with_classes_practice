#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            continue;
        }
        else if (arr[j]==1){
            arr[j]=temp;
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }

    
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}