#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>x={1,2,3,4,5,6};
    // x.erase(x.begin()+3);
    x.erase(x.begin()+1,x.begin()+5);
    // x.erase(x.begin()+1,x.end()-1);
    for(int y:x){
        cout<<y<<" ";
    }


    return 0;
}