#include <stdio.h>

int main() {
  
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }


    //ascending sorting
    // for (int i=0; i<n-1; i++)
    // {
    //     for (int j=i+1; j<n; j++)
    //     {
    //         // printf("%d %d\n",a[i],a[j]);
    //         if (a[i]>a[j])
    //         {
    //             int tmp=a[i];
    //             a[i]=a[j];
    //             a[j]=tmp;
    //         }
            
    //     }
        
    // }

    //descending sorting
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            // printf("%d %d\n",a[i],a[j]);
            if (a[i]<a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    





  return 0;
}
