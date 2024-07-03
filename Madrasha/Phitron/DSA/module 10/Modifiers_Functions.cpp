#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>myList={12,23,30,34,30,45,30,40,50,60};
    list<int>newList;
    // newList=myList;
    // list<int>fun={3000000,5000000,4000000};
    // vector<int>v={3000000,5000000,4000000};
    // myList.push_back(100);
    // myList.push_front(500);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(),2),300);
    // myList.erase(next(myList.begin(),3));         // erase = delete;
    // myList.insert(next(myList.begin(),1),{100,200,300,500});
    // myList.insert(next(myList.begin(),1),fun.begin(),fun.end());
    // myList.insert(next(myList.begin(),1),v.begin(),v.end());
    // myList.erase(next(myList.begin(),3),next(myList.begin(),6));
    // replace(myList.begin(),myList.end(),30,3000);

    // for(int val:myList){
    //     cout<<val<<endl;
    // }

    auto it=find(myList.begin(),myList.end(),34);
    if (it==myList.end())
    {
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found: "<<*it<<endl;
    }
    
    return 0;
}