#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter: ";
    cin >>n ;
    int place=1;
    int ans=0;
    while(n!=0){
        int last=n%10;
        n/=10;
        ans=last*place+ans;
        place*=10;

    }
    cout<<ans;
    return 0;
}