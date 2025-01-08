#include <stdio.h>

int main() {
  

    int n,k=1;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {    //line soro 
        for (int j = 1; j <= k; k++)
        {
            printf("%d ",j);
        }
        //line ses
        k++;
        printf("\n");
        
    }
    




  return 0;
}