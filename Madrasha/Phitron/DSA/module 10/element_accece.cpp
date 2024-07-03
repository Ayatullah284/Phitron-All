#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>myList={10,20,39,59,28,30};
    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;
    cout<<*next(myList.begin(),2);

    return 0;
}