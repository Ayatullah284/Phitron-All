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
    vis[si][sj] = true;
    
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        
        if (valid(ci, cj) == true && vis[ci][cj] == false && a[ci][cj]!='#')
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]=='.' && vis[i][j]==false)
            {
                dfs(i,j);
                flag++;
            }
            
            
        }
        
    }
    
    
    
    
    memset(vis, false, sizeof(vis));
    cout<<flag<<endl;
    return 0;
}