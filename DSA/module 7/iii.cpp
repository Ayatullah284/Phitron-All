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
void maximum_value(Node* head){
    int maximum_value=INT_MIN;
    for (Node* i = head; i->next !=NULL; i=i->next)
    {
        for (Node* j = i->next; j !=NULL; j=j->next)
        {
            if (i->val>maximum_value)
            {
                maximum_value=i->val;
            }
            
        }
        
    }
    cout<<endl<<maximum_value<<endl;
    
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
        insert(head,tail,val);
    }
  
    maximum_value(head);

    return 0;
}