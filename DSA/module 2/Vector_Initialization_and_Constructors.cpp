#include<bits/stdc++.h>
using namespace std;
int main(){


    // vector<int>v; // type-1
    // vector<int>v(5); // type-2
    // vector<int>v(5,20); // type-3

    // vector<int>a(5,500); // type-4
    // vector<int>v(a); // type-4

    // int a[7]={10,20,30,40,50,60,70}; // type-5
    // vector<int>v(a,a+7); // type-5

    vector<int>v={3,6,9,8};

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;


    return 0;
}