#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll input;
ll dp[100005];

bool rec(ll n)
{
    if(n > input){
         return false;
    }

    if(n==input)
    {
         return true;
    }
    if(dp[n] != -1) return dp[n];

    dp[n] = rec(n + 3) || rec(n * 2);
    return dp[n];

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin >> input;
        for (int i = 0; i < input; i++)
        {
            dp[i]=-1;
        }  
        
        bool flag = rec(1);
        if(flag)
        {
             cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}









