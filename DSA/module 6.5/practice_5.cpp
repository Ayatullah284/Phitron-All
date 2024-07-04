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
void print(Node* head, int cnt){
    Node* tmp=head;
    int flag=1;
    for (int i = 1; i < cnt; i++)
    {
        
        if (tmp->val > tmp->next->val)
        {
            flag--;
            break;
        }
        tmp=tmp->next;
    }
    

    if (flag==1)
    {
        cout<<endl<<"YES"<<endl<<endl;
    }else{
        cout<<endl<<"NO"<<endl<<endl;
    }
    
    

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
 
    print(head,cnt);
    
    
    

 
    
    
    


    return 0;
}