#include<stdio.h>
int main(){


    int arr[5]={10, 20, 30, 40, 50};


    printf("%p\n",&arr[1]);
    printf("%p\n",(arr+1));


    printf("%d\n",arr[1]);
    printf("%d\n",*(arr+1));
    printf("%d\n\n",*(1+arr));
    printf("%d\n",1[arr]);


    return 0;
}