#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,8,5,3,9,5,7};
    cout<<(sizeof(arr)/sizeof(arr[0]))<<endl;
    int count=0;
    cout<<"enter: ";
    int n;
    cin>>n;
    for(int i=0;i<8;i++){
        if(arr[i]==n){
            count+=1;
        }
    }
    cout<<endl;
    cout<<"frequency: "<<count;
    return 0;
}