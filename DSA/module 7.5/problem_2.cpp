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
void print(Node* head){
    if (head==NULL)
    {
        return;
    }
    print(head->next);
    cout<<head->val<<" ";
    
    
}
int main(){

    int val;
    Node* head=NULL;
    Node* tail=NULL;

    int cnt=0;
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

    print(head);



    return 0;
}