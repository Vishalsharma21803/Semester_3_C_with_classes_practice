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
    int count0=0;
    int count1=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            count0+=1;
        }
        else if (arr[j]==1){
            count1+=1;

        }
    }
    for(int i=0;i<count0;i++){
        arr[i]==0;
    }
    for(int i=count0;i<n;i++){
        cout<<"1"<<" ";
    }


    

return 0;
}