#include <stdio.h>
void odd_even(void){

    int n;
    int even=0;
    int odd=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("%d\n",n);
    for (int i = 0; i < n; i++)
    {
        // printf("%d ",arr[i]);
        if (arr[i]%2==0)
        {
            even += 1;
        }else{
            odd += 1;
        }
        
    }


    
    printf("%d %d",even,odd);
}

int main() {
    
    odd_even();

  return 0;
}