#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll input;

bool rec(ll n)
{
    if(n > input){
         return false;
    }

    if(n==input)
    {
         return true;
    }

    return rec(n10) || rec(n20);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin >> input;
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