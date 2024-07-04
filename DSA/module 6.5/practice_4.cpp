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
void insert_at_head(Node* &head, int insert_val){
    Node* newNode=new Node(insert_val);
    newNode->next=head;
    head=newNode;

}
void insert_at_any_position(Node* &head, int index, int insert_val){
    Node* newNode=new Node(insert_val);
    Node* tmp=head;
    for (int i = 0; i < index-1; i++)
    {
        tmp=tmp->next;
        if (tmp==NULL)
        {
            cout<<endl<<"Invalid"<<endl<<endl;
            return;
        }
        
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    
    
}
void print(Node* head){
    cout<<endl<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main(){


    int val,q,index,insert_val;
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
    // cin>>q;
    // while (q--)
    // {
        cin>>index>>insert_val;
        if (index==0)
        {
            insert_at_head(head,insert_val);
        }else if(index>0){
            insert_at_any_position(head,index,insert_val);
            
        }
        
        
        
        
    // }
    
    print(head);
 
    
    
    
    

 
    
    
    


    return 0;
}