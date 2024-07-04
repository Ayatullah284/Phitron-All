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
    

    for (int i = 0; i < n-1; i++)
    {
        // cout<<a[i]<<" ";
        for (int j = i+1; j < n; j++)
        {
            // cout<<a[i]<<a[j]<<" ";
            
            if (a[i]>a[j])
            {
                // int tmp=a[i];
                // a[i]=a[j];
                // a[j]=tmp;
                swap(a[i],a[j]);
            } 
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}