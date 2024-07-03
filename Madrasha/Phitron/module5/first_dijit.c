#include<stdio.h>
int main(){


    int x;
    scanf("%d", &x);

    int y = x / 1000;

    if (y % 2 == 0)
    {
        /* code */
        printf("EVEN");
    }else{
        printf("ODD");
    }


    return 0;
}