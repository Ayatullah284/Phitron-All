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
void insert_tail(Node* &head, Node* &tail, int v){
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
void print_recertion(Node* head){

    if (head==NULL)
    {
        return;
    }
    cout<<head->val<<" ";
    print_recertion(head->next);
    
}
void print_recertion_revers(Node* head){

    if (head==NULL)
    {
        return;
    }
    print_recertion_revers(head->next);
    cout<<head->val<<" ";

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
        insert_tail(head,tail,val);
    }
     cout<<endl<<endl<<endl;

    print_recertion(head);
    cout<<endl;
    print_recertion_revers(head);
    


    return 0;
}