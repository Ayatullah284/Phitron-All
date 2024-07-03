#include<stdio.h>
int main(){

    // 1 
    // char a[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &a[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    
    // 2
    char a[5];
    int siz = sizeof(a)/sizeof(char);
    printf("%d", siz);
    // printf("%d", sizeof(a));


    return 0;
}