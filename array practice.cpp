#include <iostream>
using namespace std;
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!=' ';i++){
        count+=1;
    }
    return count;
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    // cin>>arr;
    
    cout<<arr<<endl;
    
    cout<<length(arr)<<endl;
    
    

    return 0;
}