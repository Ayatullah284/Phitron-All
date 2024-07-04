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
void insert_2(Node* &head_2, Node* &tail_2, int v){
    Node* newNode=new Node(v);
    if (head_2==NULL)
    {
        head_2=newNode;
        tail_2=newNode;
        return;
    }
    tail_2->next=newNode;
    tail_2=newNode;
    
    
}
void Same_to_Same(Node* head,Node* head_2,int cnt,int cnt_2){
    int flag=1;
    Node* tmp=head;
    Node* tmp_2=head_2;
    while (tmp!=NULL & tmp_2!=NULL)
    {

        if (tmp->val!=tmp_2->val ||cnt!=cnt_2)
        {
            flag=0;
            break;
        }{
            tmp=tmp->next;
            tmp_2=tmp_2->next;
        }
        
    }

    if (flag==0)
    {
        cout<<"NO"<<endl;
    }else if (flag==1)
    {
        cout<<"YES"<<endl;
    }
    
    
    
}
int main(){

    int val;
    Node* head=NULL;
    Node* tail=NULL;

    Node* head_2=NULL;
    Node* tail_2=NULL;
    int cnt=0;
    int cnt_2=0;
    while (true)
    {
        cin>>val;
        
        if (val==-1)
        {
            break;
        }
        cnt++;
        insert(head,tail,val);
    }
    while (true)
    {
        cin>>val;
        
        if (val==-1)
        {
            break;
        }
        cnt_2++;
        insert_2(head_2,tail_2,val);
        
    }

    Same_to_Same(head,head_2,cnt,cnt_2);


    return 0;
}