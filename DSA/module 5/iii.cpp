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
int main(){

    Node* head=new Node(11);
    Node* a=new Node(22);
    Node* b=new Node(33);
    Node* c=new Node(44);
    Node* d=new Node(55);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    


    return 0;
}