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
void insert_head(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    
}
void insert_tail(Node* &head, Node* &tail, int v){
    Node* newNode=new Node(v);
    if (tail==NULL)
    {
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    // tail=tail->next; // code of Rahat vai
    tail=newNode;       // My code
    
}
void insert_at_any_position(Node* head,int index,int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for (int i = 1; i <=index-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;

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
void reverse(Node* head, Node* tail){
    Node* i=head;
    Node* j=tail;
    while (i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
    
}
int main(){

    Node* head=NULL;
    Node* tail=NULL;
    int Q;
    cin>>Q;
    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_at_any_position(head, x, v);
        }
        print(head);
        reverse(head,tail);
        print(head);

    }
    
    

    
    
    return 0;
}
