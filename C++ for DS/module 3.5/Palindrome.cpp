#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int result=1;
    // for (int i = 0; i < n/2; i++)
    // {
    //     if (a[i]!= a[n-i-1])
    //     {
    //         result = 0;
    //     } 
    // }

    int i,j;
    i=0;
    j=n-1;
    while (i<j)
    {
        if (a[i]!=a[j])
        {
            result = 0;
        }
        
        i++;
        j--;
    }

    // cout<<result<<" ";
    if (result==1)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }


    
    

    return 0;
}