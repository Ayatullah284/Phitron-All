#include<stdio.h>
#include<limits.h>
int main(){


    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int lowest_num = INT_MAX;
    int lowest_index = 0;
    int max_num = INT_MIN;
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (lowest_num > a[i])
        {
            lowest_num = a[i];
            lowest_index = i;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (max_num < a[i])
        {
            max_num = a[i];
            max_index = i;
        }
        
    }
    
    // printf("%d %d\n", lowest_num, max_num);
    // printf("%d %d", lowest_index, max_index);
    a[lowest_index] = max_num;
    a[max_index] = lowest_num;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    

    

    return 0;
}