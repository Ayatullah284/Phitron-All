#include <stdio.h>

int main() {
  
  
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int i=0, j=n-1;
    int tmp;
    do
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    } while (i < j);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    



  
  return 0;
}