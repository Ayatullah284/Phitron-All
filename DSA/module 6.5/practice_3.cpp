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
void even_print(Node* head, int mid){
    Node* tmp=head;
    for (int i = 1; i < mid; i++)
    {
        tmp=tmp->next;
    }
    cout<<endl<<tmp->val<<" "<<tmp->next->val<<endl<<endl;
    

}
void odd_print(Node* head, int mid){
    Node* tmp=head;
    for (int i = 1; i < mid; i++)
    {
        tmp=tmp->next;
    }
    cout<<endl<<tmp->val<<endl<<endl;
}
int main(){


    int val;
    Node* head=NULL;
    int cnt=0;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_val(head,val);
        cnt++;
        
    }
    // cout<<cnt<<endl;
    if (cnt%2==0)
    {
        int mid=cnt/2;
        even_print(head,mid);
    }else if (cnt%2==1)
    {
        int mid=(cnt/2)+1;
        odd_print(head,mid);
    }
    
    

 
    
    
    


    return 0;
}