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

void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head = temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" "<<"->"<<" ";
        temp=temp->next;
    }
    
}
// void(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;

// }
    


int main(){
    Node* node1=new Node(10);
    
    Node* head=node1;
   // Node* tail=node1;
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);


    print(head);


}