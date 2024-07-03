#include<stdio.h>
int main(){


    int x;
    scanf("%d", &x);

    int n = x % 10;
    int m = x / 10;

    if (n%m == 0 || m%n == 0 )
    {
        printf("YES");
    }else{
        printf("NO");
    }
    


    return 0;
}