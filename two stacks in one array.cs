#include <bits/stdc++.h> 
class TwoStack {


public:
    int *arr;
    int size;
    int top1;
    int top2;

    // Initialize TwoStack.
    TwoStack(int size) {
        this -> size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        // else{
        //     cout<<"stack overflowed"<<endl;
        // }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        // else{
        //     cout<<"stack overflowed"<<endl;
        // }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1>=0){
            
           int ans=arr[top1];
           top1--;
            return ans;

        }
         else{
             return -1;
        //     cout<<"stack is empty"<<endl;
         }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2<size){
            
           int ans=arr[top2];
           top2++;
            return ans;
        }
         else{
            return -1;
        //     cout<<"stack is empty"<<endl;
         }
    }
};
