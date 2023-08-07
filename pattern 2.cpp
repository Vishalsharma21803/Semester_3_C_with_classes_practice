#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=n-1;i>1;i--){
        cout<<" ";
        for(int j=1;j<=n;j++){
            cout<<j;
            cout<<endl;
            for(int k =1;k<=n;k++){
                cout<<k;
                cout<<endl;
            }
        }
    }
    return 0;

    
}