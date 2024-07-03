#include<stdio.h>
int main(){


    long long int n;
    scanf("%lld", &n);

    // long long int p = n + n + 2 + n + 4 + n + 6 + n + 8;

    long long int o = (n - 16) / 4;

    long long int b = o + 1;
    long long int c = o + 3;
    long long int d = o + 5;
    long long int e = o + 7;

    printf("%lld %lld %lld %lld", b, c, d, e);


    return 0;
}