#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        pq.push(num);
    }
    
    int q;
    cin>>q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
            if(!pq.empty()){
                cout<<pq.top()<<endl; 
            }else{
                cout<<"Empty"<<endl;
            }
        }else if (c == 1)
        {
            if(!pq.empty()){
                cout<<pq.top()<<endl; 
            }else{
                cout<<"Empty"<<endl;
            }
        }
        else if (c == 2)
        {
            if(!pq.empty()) pq.pop();
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }else{
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}