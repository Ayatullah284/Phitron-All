#include<bits/stdc++.h>
using namespace std;
int main(){

            // type-1
    // int n;
    // cin>>n;
    // vector<string>v;
    // for (int i = 0; i < n; i++)
    // {
    //     string x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout<<v[i]<<endl;
    // // }
    // for(string valu:v){
    //     cout<<valu<<endl;
    // }
    
            // typy-2
    // int n;
    // cin>>n;
    // vector<string>v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // for(string valu:v){
    //     cout<<valu<<endl;
    // }


            // type-3
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for (int i = 0; i < n; i++)
    {
            // Space soho input:
        getline(cin,v[i]);
    }
    for(string valu:v){
        cout<<valu<<endl;
    }
    


    return 0;
}