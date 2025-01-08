#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const long long int N = 1e18;
long long int dis[10005];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    // const long long int INF = 1e18 + 5;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = N;
    }
    int s;
    cin>>s;
    dis[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < N && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle=false;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < N && dis[u] + c < dis[v])
            {
                cycle=true;
                break;
            }
        }
    }
    if (cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
    }else{
        int q;
        cin>>q;
        while (q--)
        {
            int x;
            cin>>x;
            if(dis[x]==N) cout<<"Not Possible"<<endl;
            else cout<<dis[x]<<endl;
        }
        
    }
    
    
    return 0;
}