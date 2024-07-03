#include<stdio.h>
int main(){


    int n;
    scanf("%d",&n);
    // printf("%d",n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    int both = 0;
    int two = 0;
    int three = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]%3==0)
        {
            both += 1;
        }
        
    }
    // printf("%d",both);
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            two += 1;
        }
        
    }
    // printf("%d",two);
    for (int i = 0; i < n; i++)
    {
        if (a[i]%3==0)
        {
            three += 1;
        }
        
    }
    // printf("%d",three);
    int final_of_three = three - both;
    // printf("%d",final_of_three);
    

    printf("%d %d",two,final_of_three);
    return 0;
}