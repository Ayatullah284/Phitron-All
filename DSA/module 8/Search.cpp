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
void Search(Node* head, int find_num){
    int index=0;
    Node* tmp=head;
    int flag=0;
    Node* tmp_2=head;
    while (tmp_2!=NULL)
    {
        if (tmp_2->val==find_num)
        {
            flag++;
            break;
        }
        tmp_2=tmp_2->next;
        
    }
    if (flag==0)
    {
        cout<<"-1"<<endl;
    }else if(flag==1){

        while (tmp->val!=find_num)
        {
            index++;
            tmp=tmp->next;
        }
        cout<<index<<endl;
    }
    
    

}
int main(){

    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
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
        int find_num;
        cin>>find_num;
        Search(head,find_num);
        
    }
    
  
    
    return 0;
}