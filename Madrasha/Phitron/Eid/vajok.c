#include<stdio.h>
int main(){


    int x, y, p;
    scanf("%d %d %d", &x, &y, &p);

    int result = (x - p) / y;


    printf("%d", result);


    return 0;
}