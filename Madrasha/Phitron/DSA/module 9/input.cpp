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
void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_position(Node* head, int poss, int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for (int i = 1; i <= poss-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
    
}
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    if (tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
    
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
void print_normal(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void print_reverse(Node* tail){
    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
}
int main(){

    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1){
           break; 
        } 
        int poss,val;
        
        
        insert_at_head(head,tail,val);
        insert_at_position(head,poss,val);
        insert_at_tail(head,tail,val);
        
    }
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}