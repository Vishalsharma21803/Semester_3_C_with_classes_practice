#include<iostream>
using namespace std;
class queue{
    public:
    int front;
    int rare;
    int *arr;
    int size;

    queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rare=-1;
    }

    void push(int element){
        if(size-rare>1){
            rare++;
            arr[rare]=element;

        }
        else{
            cout<<"queue overflow"<<endl;
        }
    }
    void pop(){
        if(rare>=0){
            rare--;
        }
        else{
            cout<<"queue underflow"<<endl;
        }
    }
    bool empty(){
        if(rare==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int sizeo(){
        //cout<<(rare+1);
        return (rare+1);
    }
    
    
};
int main(){
    queue q1(10);
    q1.push(5);
    q1.push(3);
    q1.push(7);
    q1.pop();
    cout<<q1.empty();
    
    cout<<"size: "<<q1.sizeo();
    return 0;
}