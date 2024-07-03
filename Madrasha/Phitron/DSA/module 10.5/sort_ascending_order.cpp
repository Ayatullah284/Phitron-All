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
void insert_at_val(Node* &head, Node* &tail, int v){
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
void sort_ascending_order(Node* head){
    
    for (Node* i= head; i->next!=NULL; i=i->next){
        for (Node* j = i->next; j!=NULL; j = j->next){
            if (i->val>j->val){
                swap(i->val,j->val); 
            }
        }
    }

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
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
        if (val==-1)
        {
            break;
        }
        insert_at_val(head,tail,val);
    }
    sort_ascending_order(head);

    
    
    return 0;
}
