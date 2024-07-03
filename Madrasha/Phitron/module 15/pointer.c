#include<stdio.h>
int main(){


    int x=111;
    int *ptr=&x;
    printf("x address- %p\n",&x);
    printf("ptr address- %p\n\n",&ptr);

    printf("x value- %d\n",x);
    printf("ptr value- %d\n\n",*ptr);

    x=555;
    printf("x value- %d\n",x);
    printf("ptr value- %d\n\n",*ptr);

    *ptr=888;
    printf("x value- %d\n",x);
    printf("ptr value- %d",*ptr);


    return 0;
}