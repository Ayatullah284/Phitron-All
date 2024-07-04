#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>x={1,2,3,4,5};
    // x.insert(x.begin()+2,500);

    vector<int>y={111,222,333};
    x.insert(x.begin()+2,y.begin(),y.end());
    for(int p:x){
        
        cout<<p<<" ";
    }


    return 0;
}