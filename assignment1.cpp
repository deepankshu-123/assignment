#include <iostream>
using namespace std;

class node{
    
    public:
    string name;
    int data;
    
    node*next;
    node*prev;

    node(string d,int val){
        name=d;
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node*&head,string d,int val){
    
    node*n=new node(d,val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;

    }
    
    head=n;

}


void insertattail(node* &head,string d,int val){
    if(head==NULL){
        insertathead(head,d,val);
        return;
    }

    node* n=new node(d,val);
    node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        
        cout<<temp->name<<" "<<temp->data<<endl;
        
        
        temp=temp->next;
        
    }
}
int main(){
    node*head=NULL;
    insertattail(head,"Father",42);
    insertattail(head,"Mother",41);
    insertattail(head,"Brother",20);
    insertattail(head,"Sister",15);
    display(head);
    insertattail(head,"Grandmother",60);
    display(head);
}