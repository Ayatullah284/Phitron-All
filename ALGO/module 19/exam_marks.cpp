#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
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
        dp[n][s] = option1 || option2;
        if(dp[n][s]==1) return true;
        else return false;
    } else {
        bool option2 = setSum(arr,n-1,s);
        dp[n][s] = option2;
        if(dp[n][s]==1) return true;
        else return false;
    }
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;
        int arr[n];
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