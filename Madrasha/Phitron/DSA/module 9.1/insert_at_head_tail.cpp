#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_normal(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void print_revers(Node* tail){
    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
}
void insert_at_position(Node* head, int pos, int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    tmp->next->next->prev=newNode;
    newNode->prev=tmp;
    
}
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
    
}
void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=tmp;
    tmp->prev=newNode;
    head=newNode;
    
    
    
}
void insert_at_tail(Node* head, Node* &tail, int v){
    Node* newNode=new Node(v);
    Node* tmp=tail;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    if (tail==NULL)
    {
        head=newNode;
        tail=newNode;
    }else{
        tmp->next=newNode;
        newNode->prev=tmp;
        tail=newNode;
    }
    
    
    
}
int main(){

     Node* head=new Node(10);
     Node* a=new Node(20);
     Node* b=new Node(30);
     Node* c=new Node(40);
     Node* tail=c;

     // Connection:
     head->next=a;
     a->prev=head;
     a->next=b;
     b->prev=a;
     b->next=c;
     c->prev=b;

    int pos,val;
    cin>>pos>>val;

    cout<<size(head)<<endl;
    if (pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }else if (pos==0)
    {
        insert_at_head(head,tail,val);
    }else if (pos==size(head))
    {
        insert_at_tail(head,tail,val);
    }else if(pos!=0 && pos!=size(head)){
       insert_at_position(head, pos, val);
    }
    
    
  
    
    print_normal(head);
    print_revers(tail);

    return 0;
}