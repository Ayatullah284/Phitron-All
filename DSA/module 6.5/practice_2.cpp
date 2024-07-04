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
int main(){


    int val;
    Node* head=NULL;
    int cnt[101]={0};
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_at_val(head,val);
        cnt[val]++;
        
    }

    int flag=0;
    for (int i = 0; i < 100; i++)
    {
        if (cnt[i]>1)
        {
            flag++;
            break;
        }
        
    }

    if (flag==0)
    {
        cout<<endl<<"NO"<<endl<<endl;
    }else{
        cout<<endl<<"YES"<<endl<<endl;
    }
    
    
    
    


    return 0;
}