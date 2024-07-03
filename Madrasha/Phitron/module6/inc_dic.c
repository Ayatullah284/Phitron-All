#include<stdio.h>
int main(){


    int i = 10;
    printf("i-%d\n", i);
    int x = i++;
    int o = i;
    int y = ++i;

    printf("x-%d 0-%d y-%d i-%d ", x, o , y, i);


    return 0;
}