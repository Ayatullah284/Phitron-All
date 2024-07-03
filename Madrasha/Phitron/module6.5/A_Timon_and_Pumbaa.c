#include<stdio.h>
int main(){


    long long int n, m;
    scanf("%lld %lld", &n, &m);

    if (n-m > 0)
    {
        printf("%lld", n-m);
    }else{
        int a = 0;
        printf("%d", a);
    }
    


    return 0;
}