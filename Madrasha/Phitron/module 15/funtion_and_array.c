#include<stdio.h>
void fun(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n",arr[i], i[arr]);
    }
    

}
int main(){


    int arr[5]={10,20,30,40,50};
    fun(arr,5);


    return 0;
}