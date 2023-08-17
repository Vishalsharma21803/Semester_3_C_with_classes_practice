#include <iostream>
using namespace std;

void reverse(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count+=1;
    }
    for(int j=count;j>=0;j--){
        cout<<arr[j];
    }

}
int main(){
    char arr[100];
    cout<<"Enter: ";
    cin.getline(arr,100);
    // cin>>arr;
    reverse(arr);
    
    return 0;
}