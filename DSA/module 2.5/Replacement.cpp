#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]<0)
        {
            v[i]=2;
        }else if (v[i]>0)
        {
            v[i]=1;
        }
        
        
    }
    for(int r:v){
        cout<<r<<" ";
    }
    
    


    return 0;
}