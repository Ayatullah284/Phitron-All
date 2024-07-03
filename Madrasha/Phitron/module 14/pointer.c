#include<stdio.h>
int main(){


    int x = 500;

    printf("%p\n", &x);
    int *p = &x;
    printf("%p\n",p);

    // dereference
    // printf("%d\n", p);
    *p=666;
    // printf("%d\n", *p);


    return 0;
}