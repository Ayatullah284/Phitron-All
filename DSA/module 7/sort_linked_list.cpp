#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void insert(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
    
}
void descending_order(Node* head){
    for (Node* i = head; i->next !=NULL; i=i->next)
    {
        for (Node* j = i->next; j !=NULL; j=j->next)
        {
            if (i->val>j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
    }
    
}
void print(Node* head){
    cout<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
    
}
int main(){

    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert(head,tail,val);
    }
  
    descending_order(head);
    print(head);

    return 0;
}