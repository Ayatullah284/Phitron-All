#include<stdio.h>
int main(){

    int n,k;
    scanf("%d",&n);
    k=1;

     for (int i = 1; i <= n; i++)
     {
        for (int l = 1; l <= k; l++)
        {
            printf("%d ",l);
        }
        k++;
        printf("\n");
     }


    




    return 0;
}