#include<bits/stdc++.h>
using namespace std;
int main(){


    // vector<int>x={1,2,3,2,5,6,2,8,5,2,4,2,4,7,2};
    // replace(x.begin(),x.end(),2,2222);
    // for(int y:x){
    //     cout<<y<<" ";
    // }

            // find()
    vector<int>y={1,2,3,2,5,6,2,8,5,2,4,2,4,7,2};
    auto it = find(y.begin(),y.end(),300);
    if (it==y.end())
    {
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
    
    


    return 0;
}