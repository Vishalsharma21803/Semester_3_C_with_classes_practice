#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
for(int i=1;i<n;i++){ // j
int curr=arr[i]; // i
int j;
for( j=i-1;j>=0;j--){ //1 4 5 8 9 10
if(curr<arr[j]){
arr[j+1]=arr[j];
}
else{
break;
}
}
arr[j+1]=curr;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}


}

int main(){
    
}