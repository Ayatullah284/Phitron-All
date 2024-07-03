#include<stdio.h>
int main(){


    long long int x, y;
    scanf("%lld %lld", &x, &y);

    long long int rina = (x - y) / 2; 
    long long int mina = rina + y;

    printf("%lld %lld", mina, rina);
    

    return 0;
}