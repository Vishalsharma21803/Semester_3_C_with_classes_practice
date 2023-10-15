#include <iostream>
using namespace std;

    class Node{
        public:
        int val;
        Node* next;
    

    Node(int d){
        this->val =d ;
        this->next=NULL;
    }
    };
    


int main(){
    Node* node1=new Node(10);
    cout<<node1->val<<endl;

}