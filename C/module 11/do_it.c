#include <stdio.h>

int main() {
  


    int n,k;
    scanf("%d %d",&n,&k);
    // printf("%d %d",n,k);

    for (int j = 0; j < n; j++)
    {
            for (int i = 1; i <= k; i++)
        {
            printf("%d ",i);
            if (i == k)
            {
                printf("\n");
            }
            
        }
    }
    
    





  return 0;
}