#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

int dp[1005][100005];

bool setSum(int *arr,int n,int s) {
    if(n == 0) {
        if(s == 0) {
            return true;
        }else {
            return false;
        }
    }
    if(dp[n][s] != -1) return dp[n][s];
    if(arr[n-1] <= s) {
        bool option1 = setSum(arr,n-1,s-arr[n-1]);
        bool option2 = setSum(arr,n-1,s);
        return dp[n][s] = option1 || option2;
    } else {
        bool option2 = setSum(arr,n-1,s);
        return dp[n][s] = option2;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    rep(i,t) {
        int n,m;
        cin>>n>>m;
        int arr[n+10];
        for(int i = 0; i < n; i++) cin>>arr[i];
        int s = 1000-m;
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= s; j++) {
                dp[i][j] = -1;
            }
        }
        if(setSum(arr,n,s)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}