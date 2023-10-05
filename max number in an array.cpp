#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],temp;
    int maxindex,j;
    for(j=0;j<n;j++){

        if (max < arr[j]) {
          temp = max;
          max = arr[j];
          arr[j] = temp;
          maxindex=j;
        }
        else{
            continue;
        }
    }
    cout<<max<<endl;
    return 0;
}

