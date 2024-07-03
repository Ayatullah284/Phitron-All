#include<stdio.h>
int main(){


    double x=5.26;
    double *ptr=&x;
    double *ptr2=ptr;

    printf("%.2lf\n",x);
    printf("%.2lf\n",*ptr);
    printf("%.2lf\n",*ptr2);


    return 0;
}