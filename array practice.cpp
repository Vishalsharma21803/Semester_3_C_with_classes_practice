#include <iostream>
using namespace std;
int length(char arr[]){
    int count=1;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[0]=='\0'){
            break;
        }
        if(arr[i]==' '){
            count+=1;
        }
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