#include<iostream>
using namespace std;
int main(){
    int arr[]={456,7,5,9,4,3,1,77,99};
    int sizeofarray=(sizeof(arr))/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<sizeofarray;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum: "<<max<<endl;

    int min=arr[0];
    for(int j=0;j<sizeofarray;j++){
        if(arr[j]<min){
            min=arr[j];
        }
    }
    cout<<"minumum: "<<min;
    return 0;
}