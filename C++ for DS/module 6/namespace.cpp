#include<bits/stdc++.h>
using namespace std;
namespace Rakib{
    int age=24;
    void Print(){
        cout<<"Rakib namespace"<<endl;
    }
};
namespace Sakib{
    int age2=30;
    void Print2(){
        cout<<"Rakib namespace"<<endl;
    }
};

using namespace Rakib;
using namespace Sakib;
int main(){


    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;

    cout<<age<<endl;
    cout<<age2<<endl;


    return 0;
}