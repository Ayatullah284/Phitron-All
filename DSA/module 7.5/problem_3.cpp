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
void odd_print(Node* head, int mid){
    Node* tmp=head;
    for (int i = 1; i < mid; i++)
    {
        tmp=tmp->next;
    }
    cout<<endl<<tmp->val<<endl;
    
}
void even_print(Node* head, int mid){
    Node* tmp=head;
    for (int i = 1; i < mid; i++)
    {
        tmp=tmp->next;
    }

    cout<<endl<<tmp->val<<" "<<tmp->next->val<<endl;
    
}
int main(){

    int val;
    Node* head=NULL;
    Node* tail=NULL;

    int cnt=0;
    int mid=cnt/2;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert(head,tail,val);
        cnt++;
    }
    if (cnt%2==1)
    {   int mid=(cnt/2)+1;
        odd_print(head,mid);
    }else if (cnt%2==0)
    {
        int mid=cnt/2;
        even_print(head,mid);
    }
    
    
    



    return 0;
}