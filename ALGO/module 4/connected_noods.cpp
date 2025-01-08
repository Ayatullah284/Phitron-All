#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int m;
    cin>>m;
    // cout<<m<<endl;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        for (int j = 0; j < mat[x].size(); j++)
        {
            // cout<<mat[i][j]<<" ";
            v.push_back(mat[x][j]);
            
        }
        // cout<<endl;
        sort(v.begin(),v.end());
        if (v.empty())
        {
            cout<<"-1"<<endl;
        }else{
            for (int i = v.size()-1; i >= 0; i--)
            {
                cout<<v[i]<<" ";
                v.pop_back();

            }
            cout<<endl;
            
        }
        
    }
    
    
    return 0;
}