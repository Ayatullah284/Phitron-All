#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {   

        // jor number
        if (i%2 == 0)
        {
            // printf("%d\n", arr[i]);
        }

        // bijor number
        if (i%2 != 0)
        {
            // printf("%d\n", arr[i]);
        }

        // all number
        // printf("%d\n", arr[i]);
        
        
    }
    
    


    return 0;
}