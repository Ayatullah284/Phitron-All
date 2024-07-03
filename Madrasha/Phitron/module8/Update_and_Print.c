#include<stdio.h>
int main(){


    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (arr2[0] >= 0 && arr2[0] < n)
        {
            arr[arr2[0]] = arr2[1];
        }
        
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    



    return 0;
}