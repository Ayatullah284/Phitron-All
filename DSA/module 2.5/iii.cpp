#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>v;
    for(int i=0; i<v.size(); i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int r;
    cin>>r;

    for (int i = 0; i < v.size()-1; i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[i]+v[j]==r)
            {
                cout<<"["<<v[i]<<","<<v[j]<<"]"<<endl;
            }
            
        }
        
        
    }
    
    


    return 0;
}