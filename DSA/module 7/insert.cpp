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
void insert_at_head(Node* &head, int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
void insert_at_any_position(Node* &head, int pos, int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    

}
void insert_at_tail(Node* &head, Node* &tail, int v){
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

    int val,pos,insert_val;
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_val(head,val);
        
    }

    cin>>pos>>insert_val;
    if (pos>size(head))
    {
        cout<<endl<<endl<<"Invalid"<<endl<<endl;
    }else if (pos==0)
    {
        insert_at_head(head,insert_val);
    // }else if (pos==size(head))
    // {
    //     insert_at_tail(head,tail,insert_val);
    }else{
        insert_at_any_position(head,pos,insert_val);
    }
    
    
    print(head);
    


    return 0;
}