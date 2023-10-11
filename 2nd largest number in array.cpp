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
    cout<<"max: "<<max<<endl;

    int max2=arr[0];
    int k;
    for(k=0;k<n;k++){
        if(arr[k]>max2){
            if(max2==max){
                continue;
            }
        }
        else{
            continue;

        }
    }

    cout<<"max2 : "<<max2<<endl;





    return 0;
}