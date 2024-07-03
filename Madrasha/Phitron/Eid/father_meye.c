#include<stdio.h>
int main(){


    long long int n;
    scanf("%lld", &n);

    long long int father = (n / 5) * 4; 
    long long int meye = father / 4;

    printf("%lld %lld", father, meye);


    return 0;
}