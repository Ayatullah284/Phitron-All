#include<bits/stdc++.h>
using namespace std;
 
int main(){

    char c;
    vector<int>cnt(26,0);
    while (cin>>c)
    {
        cnt[c-'a']++;
    }
    for (char i = 0; i <= 25; i++)
    {
        if (cnt[i]>0)
        {
            printf("%c : %d\n", i+'a', cnt[i]);
        }
        
    }
    

    
    

              
    return 0;
}