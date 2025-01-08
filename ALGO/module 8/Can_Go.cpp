#include <bits/stdc++.h>
using namespace std;
const long long int N = 10005;
#define INF INT_MAX
#define ll long long int
vector<pair<ll, ll>> v[N];
ll dis[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        long long int node = parent.first;
        long long int cost = parent.second;
        for (pair<ll, ll> child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    // while (e--)
    // {
    //     ll a, b, c;
    //     cin >> a >> b >> c;
    //     v[a].push_back({b, c});
    //     // v[b].push_back({a, c});
    // }
    for(int i = 1; i <= e; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c}); 
    }

    // const long long int IN = 1e18 + 5;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    int s;
    cin>>s;
    dijkstra(s);
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        // cout << i << "-> " << dis[i] << endl;
        int s,d;
        cin>>s>>d;
        if (dis[s]<=d)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}

// const ll INF = 1e18 + 5;
// const long long int INF = 1e18 + 5;
// for (int i = 1; i <= n; i++)
//     {
//         dis[i] = INF;
//     }