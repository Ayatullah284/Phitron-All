#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n){

    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    // for (int i = 0; i < n; i++)
    // {
    //     // cout<<a[i]<<" ";
    // }
    


    return a;
};
int main(){


    int n;
    cin>>n;
    int* result = sort_it(n);
    // cout<<result;
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
   delete[] result;
//   for (int i = 0; i < n; i++)
//     {
//         cout<<result[i]<<" ";
//     }

    return 0;
}