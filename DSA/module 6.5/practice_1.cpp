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
    // tmp ekhon ses Node e
    tmp->next=newNode;
    
    
}
void print_linked_list(Node* head){

    cout<<endl;
    // cout<<"Your linked list: ";
    // cout<<"Your linked number: ";
    Node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        // cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<cnt;
    cout<<endl<<endl;
    
}
int main(){


    int val;
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
    print_linked_list(head);
    


    return 0;
}