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

    Node* head=new Node(901);
    Node* a=new Node(802);
    Node* b=new Node(703);
    Node* c=new Node(604);

    head->next=a;
    a->next=b;
    b->next=c;

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    


    return 0;
}