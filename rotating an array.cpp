#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,5,9,7,2,8};
    int sizeofarray=(sizeof(arr))/sizeof(arr[0]);
    cout<<"size : "<<sizeofarray<<endl;
    cout<<"enter: ";
    int n;
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++){
        temp=arr[sizeofarray-1];

        for(int j=sizeofarray-1;j<0;j--){
            arr[j]=arr[j-1];

            
        }
        arr[0]=temp;
    }
    for(int k=0;k<sizeofarray;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}