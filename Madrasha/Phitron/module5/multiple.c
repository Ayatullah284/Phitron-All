#include<stdio.h>
int main(){


    long long int n, m;
    scanf("%lld %lld", &n, &m);

    if(n % m == 0){
        printf("Multiples");
    }else if (m % n == 0)
    {
        printf("Multiples");
    }else{
        printf("No Multiples");
    }


    return 0;
}