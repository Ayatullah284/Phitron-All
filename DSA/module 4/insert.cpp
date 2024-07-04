#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int sort_index;
    cin>>sort_index;
    a.insert(a.begin()+sort_index,b.begin(),b.end());
    for (int i = 0; i < n+m; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
    


    return 0;
}