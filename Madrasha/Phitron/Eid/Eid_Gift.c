#include<stdio.h>
int main(){


    int n, m;
    scanf("%d %d", &n, &m);

     int vagfol = n / m;
     int vagSes = n % m;

     printf("%d %d", vagfol, vagSes);


    return 0;
}