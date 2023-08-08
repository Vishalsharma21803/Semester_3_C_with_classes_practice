#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int count = 0;
    for(int i=1;i<n;i++){
        for(int j=1 ; j <= i ; j++){
            if(i % j == 0){
                cout<<i<<" ";
                count ++;
            }

            }
        if(count == 2){
            cout << i << endl;
            }
    return 0;
}}