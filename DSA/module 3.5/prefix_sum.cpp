#include<bits/stdc++.h>
using namespace std;

vector<int> computePrefixSums(int a[], int n) {
    vector<int> pre(n);
    pre[0] = a[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    
    return pre;
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> prefixSums = computePrefixSums(a, n);
    
    for (int i = 0; i < n; i++) {
        cout << prefixSums[i] << " ";
    }
    cout << endl;
    
    return 0;
}