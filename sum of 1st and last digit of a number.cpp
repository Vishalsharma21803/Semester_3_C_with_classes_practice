#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int last=n%10;
    while(n>=10){
        
        n=n/10;

    }
    cout<<n<<endl;
    cout<<last<<endl;
    cout<<"sum is: "<<n+last;
    return 0;
}