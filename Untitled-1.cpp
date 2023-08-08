#include<iostream>
using namespace std;

int main(){
    int n = 123;
    int length = 0;
    while(n > 0){
        n = n/10;
        length ++;
    }
    cout << length;
}
