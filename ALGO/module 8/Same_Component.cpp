#include <bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int dis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[1000][1000];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m )
        return false;
    return true;
}
bool flag=false;
void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    // dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int n = par.first, m = par.second;
        q.pop();
        if(n==di && m==dj){
            flag=true;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = n + d[i].first;
            int cj = m + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false && a[ci][cj]=='.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                // dis[ci][cj] = dis[n][m] + 1;
            }
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
    int si,sj;
    cin>>si>> sj;
    int di,dj;
    cin>>di>>dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j]=false;
        }
        
    }
    bfs(si,sj,di,dj);
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}