#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void fun_swp(int *n, int *m){
    // int tmp = *n;
    // *n=*m;
    // *m=tmp;
}
int main(){

    // int a,b,c,d;
    // cin>>a>>b>>c>>d;

    // int x = min(a,b);
    // int x = max(a,b);

    // int x = min({a,b,c,d});
    // int x = max({a,b,c,d});
    // cout<<x<<endl;
    int n,m;
    cin>>n>>m;

    // int tmp = n;
    // n=m;
    // m=tmp;

    // fun_swp(&n,&m);
    swap(n,m);
    cout<<n<<" "<<m<<endl;
    return 0;
}