#include<bits/stdc++.h>
using namespace std;
int main(){


    // vector<int>n={10,20,30,40};
    // vector<int>s={10,20,30,40,50,60};
    // vector<int>m={1,2,3,4};
    // // m=n; // O(1)
    // m=s; // O(N)
    // for (int i = 0; i < m.size(); i++)
    // {
    //     cout<<m[i]<<" ";
    // }
    

    vector<int>x={10,20,30,40,50};
    vector<int>y={10,20,30,40,50};
    x.pop_back();
    x.pop_back();
    y.push_back(100);
    y.push_back(500);
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    


    return 0;
}