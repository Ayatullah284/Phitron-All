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
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i]+1==v[j])
            {
                count++;
                break;
            }
            
        }
        
        
    }
    cout<<count;
    


    return 0;
}