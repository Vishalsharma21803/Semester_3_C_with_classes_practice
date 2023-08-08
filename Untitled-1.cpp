#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cout << "enter the number" << endl;
    cin >>n ;
    for (int i = 1 ; i < n;i++){
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                count ++;
            }
        }
        if (count == 2){
            cout << i << endl;
        }
        count = 0;
    }
}