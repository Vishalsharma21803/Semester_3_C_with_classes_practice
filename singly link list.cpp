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

void insertatmiddle(Node* &head,Node* &tail,int d,int pos){
     
    if(pos==1){
        insertathead(head,d);  // here we are also updating the value of head (code in insertathead function)
        return ;
    }

    Node*temp =head; 
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    // int count=1;
    // while(count<pos){
    //     temp=temp->next;
    //     count++;
    // }

    if(temp->next==NULL){
        insertattail(tail,d); // here we are also updating the value of tail (code in insertattail function)
        return ;
    }


    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;

}
void deletenode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp2=head;
        temp2=temp2->next;
        delete head;
        head=temp2;
        
    }
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    // if(temp->next==NULL){
    //     Node* temp3=tail;
    //     delete tail;
    //     tail=temp3;
    // }
    
    temp->next=temp->next->next;
    


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
    
    insertatmiddle(head,tail,66,2);
    insertatmiddle(head,tail,55,3);
    insertatmiddle(head,tail,35,4);
    print(head);
    cout<<endl;

    deletenode(head,tail,1);
    print(head);
    cout<<endl;
    deletenode(head,tail,9);
    cout<<"head: "<<head<<endl;
    cout<<"tail: "<<tail<<endl;
    


    print(head);

return 0;
}