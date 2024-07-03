#include<stdio.h>
int main(){
    long long int sum = 0;
    int i;
    int number;
    scanf("%d", &number);
    for ( i = 1; i <= number; i++)
    {
        sum += i;
    }
    printf("%lld", sum);

    return 0;
    
}