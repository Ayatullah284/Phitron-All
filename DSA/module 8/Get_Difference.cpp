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
int findMaxValue(Node* head) {
    int max_value = INT_MIN;
    Node* current = head;
    while (current != NULL) {
        if (current->val > max_value) {
            max_value = current->val;
        }
        current = current->next;
    }
    return max_value;
}
int findMinValue(Node* head) {
    int min_value = INT_MAX;
    Node* current = head;
    while (current != NULL) {
        if (current->val < min_value) {
            min_value = current->val;
        }
        current = current->next;
    }
    return min_value;
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
  
    int max=findMaxValue(head);
    // cout<<"max: "<<max<<endl;
    int min=findMinValue(head);
    // cout<<"min: "<<min<<endl;

    int Get_Difference=max-min;
    cout<<Get_Difference<<endl;
    return 0;
}