#include<stdio.h>
int main(){


    long long int x;
    scanf("%lld", &x);

    if (x % 3 == 0)
    {
        /* code */
        long long int n = x / 3;
        printf("%lld", n);
    }else{
        long long int m = x / 3 + 1;
        printf("%lld", m);
    }
    


    return 0;
}