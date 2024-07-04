#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int valu;
        Node* next;
};
int main(){


    Node a,b;
    a.valu=10;
    b.valu=20;

    a.next=&b;
    b.next=NULL;

    cout<<a.valu<<endl;
    // cout<<b.valu<<endl;
    cout<<a.next->valu<<endl;


    return 0;
}