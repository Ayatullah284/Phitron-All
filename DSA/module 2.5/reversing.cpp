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
    
    int i,j;
    i=0;
    j=n-1;
    while (i<j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
    
    for(int r:v){
        cout<<r<<" ";
    }
    


    return 0;
}