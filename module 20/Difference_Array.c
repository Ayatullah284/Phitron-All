#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
        // printf("%d ",b[i]);
    }
    // printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i]<b[j])
            {
                int tmp = b[i];
                b[i]=b[j];
                b[j]=tmp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d ",b[i]);
    }
    // printf("\n");
    int c[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i]-b[i] >= 0)
        {
            c[i]=a[i]-b[i];
        }else if (a[i]-b[i] < 0)
        {
            c[i]=(a[i]-b[i]) * (-1);
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    }
    

// 2
// 5
// 5 4 3 2 1
// 6
// 2 4 5 6 5 1


    return 0;
}