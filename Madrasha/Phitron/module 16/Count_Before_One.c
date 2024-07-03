#include<stdio.h>
int count_before_one(int arr[], int size){
    
    int flag=size;
    // printf("%d",size);
    for (int i = 0; i < size; i++)
    {
        // printf("%d ",arr[i]);
        if (arr[i]==1)
        {
            flag = i;
            break;
        }else if(arr[i]!=1){
            // printf("%d",i);
            flag = size;
        }
        
    }

    // printf("%d",flag);
   
   return flag;
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    int size = sizeof(arr)/sizeof(int);
    // printf("%d",size);
    int result = count_before_one(arr,size);

    printf("%d\n",result);
    return 0;
}