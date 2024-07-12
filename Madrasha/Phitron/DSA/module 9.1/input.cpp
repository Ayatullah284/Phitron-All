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
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    Node* tmp=tail;
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

    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }else
        {
            insert_at_tail(head,tail,val);
        }
        
        
    }
    
    
    
    print_normal(head);
    print_revers(tail);

    return 0;
}