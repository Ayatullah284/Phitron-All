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
void insert_2(Node* &head_2, Node* &tail_2, int v){
    Node* newNode=new Node(v);
    if (head_2==NULL)
    {
        head_2=newNode;
        tail_2=newNode;
        return;
    }
    tail_2->next=newNode;
    tail_2=newNode;
    
    
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
void print_2(Node* head_2){
    cout<<endl;
    Node* tmp=head_2;
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

    Node* head_2=NULL;
    Node* tail_2=NULL;
    int cnt=0;
    int cnt_2=0;
    while (true)
    {
        cin>>val;
        cnt++;
        if (val==-1)
        {
            break;
        }
        insert(head,tail,val);
        
    }
    while (true)
    {
        cin>>val;
        cnt_2++;
        if (val==-1)
        {
            break;
        }
        insert_2(head_2,tail_2,val);
        
    }
    // print(head);
    // print_2(head_2);
    if (cnt==cnt_2)
    {
        cout<<endl<<"YES"<<endl;
    }else if (cnt!=cnt_2)
    {
        cout<<endl<<"NO"<<endl;
    }
    
    


    return 0;
}