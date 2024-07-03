#include<stdio.h>
int main(){


    int n,s;
    scanf("%d",&n);
    s=n-1;
    for (int i = 1; i <= n; i++)
    {
        // printf("%d\n",i);
        // line soro
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        s--;
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    


    return 0;
}