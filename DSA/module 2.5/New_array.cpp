#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    for (int i = 0; i < x.size(); i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < y.size(); i++)
    {
        cin>>y[i];
    }


    y.insert(y.end(),x.begin(),x.end());
    // cout<<x.size()<<endl;
    for(int r:y){
        cout<<r<<" ";
    }
    


    return 0;
}