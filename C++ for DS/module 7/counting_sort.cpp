#include<bits/stdc++.h>
using namespace std;
int main(){


    string s;
    cin>>s;
    int frq[26]={0};

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    for(char c:s){
        // cout<<c<<endl;
        frq[c-'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        // cout<<i<<"-"<<frq[i-'a']<<endl;
        for (int j = 0; j < frq[i-'a']; j++)
        {
            cout<<i;
        }
        
        
    }
    
    


    return 0;
}