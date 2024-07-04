#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>v={1,2,3,4,5,6};
    cout<<v[0]<<endl;
    // cout<<v.front()<<endl;   -
    // cout<<v[v.size()-1]<<endl; -
    cout<<v.back()<<endl;

    // iterator:
    // vector<int>::iterator it;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    


    return 0;
}