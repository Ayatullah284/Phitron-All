#include<stdio.h>
int main(){


    long long int n;
    scanf("%lld", &n);

    // long long int p = n + n + 2 + n + 4 + n + 6 + n + 8;

    long long int o = (n - 20) / 5;

    long long int b = o + 2;
    long long int c = o + 4;
    long long int d = o + 6;
    long long int e = o + 8;

    printf("%lld %lld %lld %lld %lld", o, b, c, d, e);


    return 0;
}