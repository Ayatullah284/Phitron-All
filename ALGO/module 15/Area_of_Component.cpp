#include <bits/stdc++.h>
using namespace std;
char a[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int flag=0;
void dfs(int si, int sj)
{
    
    // cout << si << " " << sj << endl;
    flag++;
    vis[si][sj] = true;
    
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        
        if (valid(ci, cj) == true && vis[ci][cj] == false && a[ci][cj]=='.')
        {
            dfs(ci, cj);
            
        }
    }
    
}
int main()
{
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            
        }
        
    }
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]=='.' && vis[i][j]==false)
            {
                dfs(i,j);
                if(flag>0){
                   v.push_back(flag);
                   flag=0;
                }else{
                  flag=0;  
                }
                
                
            }
            
            
        }
        
    }
    
    
    
    
    memset(vis, false, sizeof(vis));
    sort(v.begin(),v.end());
    if(!v.empty()){
        for (auto n:v){
            cout<<n;
            break;
        } 
    }else{
        cout<<"-1"<<endl;
    }
    
    
    return 0;
}