#include<stdio.h>
#include<limits.h>
int main(){


    int n;
    scanf("%d", &n);

    int arr[n];
    int lowestNum = INT_MAX, pos;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (lowestNum > arr[i])
        {
            lowestNum = arr[i];
            pos = i + 1;
        }

    }

    printf("%d %d", lowestNum, pos);
    



    return 0;
}