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
        head=temp2;
        //delete temp2;
        
    }
    else{
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    
    temp->next=temp->next->next;
    if(temp->next==NULL){
        tail=temp;
    }
    }
}
    
void search(Node* head, int d){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(temp->val==d){
            cout<<"found"<<endl;
            cout<<d<<" is at "<<count<<" position in linked list"<<endl;
            return ;
        }
        temp=temp->next;
        
    }
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
    // print(head);
    // cout<<endl;

    // deletenode(head,tail,1);
    // print(head);
    // cout<<endl;
    // deletenode(head,tail,10);
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->val<<endl;
    // cout<<"tail: "<<tail->val<<endl;
    
    // cout<<"______________________________"<<endl;

    // deletenode(head,tail,1);
    // print(head);
    // cout<<endl;
    // deletenode(head,tail,8);
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->val<<endl;
    // cout<<"tail: "<<tail->val<<endl;

    search(head,40);
    


    

return 0;
}