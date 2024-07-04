#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    while (q--)
    {
        int x;
        cin>>x;
        bool flag=false;
        int l=0, r=n-1;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i]==x)
        //     {
        //         flag=true;
        //         break;
        //     }
            
        // }
        

        // binary search
        while (l<=r)
        {
            int mide_index = (l+r)/2;
            if (a[mide_index]==x) 
            {
                flag==true;
                break;
            }
            if (x>a[mide_index])
            {
                // dane jabo
                l=mide_index+1;
            }else{
                // bame jabo
                r=mide_index-1;
            }
            

        }
        
        if (flag==true)  cout<<"found"<<endl;
            else cout<<"not found"<<endl;
        
    }
    


    return 0;
}