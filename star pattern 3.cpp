#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i%2==0){
                cout<<"0";}
                else if(i%2!=0){
                    cout<<"1";
                }
            
        }
        cout<<endl;
    }
    return 0;
}