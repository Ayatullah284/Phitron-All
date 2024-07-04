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
void removeDuplicates(Node *head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        Node* tmp2 = tmp;
        while (tmp2->next != NULL)
        {
            if (tmp2->next->val == tmp->val)
            {
                Node* duplicate = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete duplicate;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
    }
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


    removeDuplicates(head);
    print(head);


    return 0;
}