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
    int sum;
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    cout<<"sum of the array: "<<sum;
    return 0;
}