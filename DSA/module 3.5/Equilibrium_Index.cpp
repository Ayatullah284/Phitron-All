#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>pre(n);
    pre[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    
    int flag=0;
    while (n--)
    {

        for (int i = 1; i < n; i++)
        {
            int mid_indx=1;
            int l_sum = pre[mid_indx-1];
            int r_sum = pre[n-1]-pre[mid_indx];

            if (i==mid_indx)
            {
                if (l_sum==r_sum)
                {
                    flag=i;
                    break;
                }
                
            }
            mid_indx++;
        }
        
        
    }
    cout<<flag<<endl;
    
    
    
    


    return 0;
}