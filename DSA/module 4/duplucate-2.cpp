#include<bits/stdc++.h>
using namespace std;
int main(){


    long long int n;
    cin>>n;
    vector<long long int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    int flag=1;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i+1]-a[i]==0)
        {
            flag--;
            break;
        }
        
    }
    if (flag==1)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    
    
    


    return 0;
}