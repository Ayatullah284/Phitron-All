#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
Node* convert(int a[],int l, int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node* root=new Node(a[mid]);
    Node* leftRoot=convert(a,l,mid-1);
    Node* rightRoot=convert(a,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
    return root;

}
int main(){


    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) cin>> a[i];
    Node* root=convert(a,0,n-1);
    level_order(root);
    


    return 0;
}