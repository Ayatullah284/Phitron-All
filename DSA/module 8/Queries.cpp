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
void insert_head(Node* &head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    
}
void insert_tail(Node* &head,int v){
    Node* newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    
    
}
void delete_node(Node* &head,int pos){
    if (head==NULL)
    {
        return;
    }
    if (pos==0)
    {
        Node* del=head;
        head=head->next;
        delete del;
        return;
    }
    Node* tmp=head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp->next==NULL)
        {
            return;
        }else{
           tmp=tmp->next; 
        }
        
    }   
        if (tmp->next==NULL)
        {
            return;
        }
        Node* del=tmp->next;
        tmp->next=tmp->next->next;
        delete del;
        
    
    
    
}
void print(Node* head){
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

    int q;
    cin>>q;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if (x==0)
        {
            insert_head(head,v);
        }else if (x==1)
        {
            insert_tail(head,v);
        }else if (x==2)
        {
            delete_node(head,v);
        }
        print(head);
        
        
    }
    


    return 0;
}