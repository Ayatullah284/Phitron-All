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

    Node* head=new Node(101);
    Node* a=new Node(202);
    Node* b=new Node(303);
    Node* c=new Node(404);
    Node* d=new Node(505);

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