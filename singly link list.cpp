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
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;

}

void insertatmiddle(Node* &head,int d,int pos){
    Node* newnode=new Node(d);
    Node*temp =head;  
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
    


int main(){
    Node* node1=new Node(10);
    
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertattail(tail,1);
    insertattail(tail,8);
    insertattail(tail,9);
   
    insertatmiddle(head,66,2);
    insertatmiddle(head,55,3);
     insertatmiddle(head,35,4);


    print(head);


}