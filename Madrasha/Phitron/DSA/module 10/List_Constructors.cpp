#include<bits/stdc++.h>
using namespace std;
int main(){

    // list<int>myList;
    // list<int>myList(10,5);
    // cout<<myList.size();
    // cout<<myList.front()<<endl;
    // for (auto it=myList.begin(); it!=myList.end(); it++)
    // {
    //     // cout<<*it<<" ";
    // }
    list<int>list_2={1,2,3,4,5};
    int a[5]={10,20,30,40,50};
    vector<int>v={10,40,70,80,90};
    // list<int>myList(list_2);
    // list<int>myList(a,a+5);
    list<int>myList(v.begin(),v.end());
    // for (auto it=myList.begin(); it!=myList.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(int val:myList){
        cout<<val<<" ";
    }
    
    return 0;
}