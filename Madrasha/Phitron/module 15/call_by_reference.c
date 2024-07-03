#include<stdio.h>
void fun(int *ptr){

    // printf("%d\n", *ptr);
    *ptr=100;
    // printf("%d\n", *ptr);


}
int main(){

    int x=50;
    printf("x-%d\n",x);
    fun(&x);
    printf("x-%d", x);


    return 0;
}