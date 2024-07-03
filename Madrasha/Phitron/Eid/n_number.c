#include<stdio.h>
int main(){


    long long int n;
    scanf("%lld", &n);

    long long int sum = n + 1;
    long long int gon = sum * n;
    long long int result = gon / 2;
    
    printf("%lld", result);


    return 0;
}