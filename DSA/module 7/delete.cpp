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
void insert_at_val(Node* &head, int val){
    Node* newNode=new Node(val);
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
void delete_head(Node* &head){
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
void delete_node(Node* head, int pos){
    Node* tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }

    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    
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

    int val,pos;
    Node* head=NULL;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_val(head,val);
        
    }

    cin>>pos;
    if (pos>=size(head))
    {
        cout<<endl<<"Invalid"<<endl<<endl;
    }else if (pos==0)
    {
        delete_head(head);
    }else{
       delete_node(head,pos); 
    }
    
    
    print(head);
    


    return 0;
}