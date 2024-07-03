#include<stdio.h>
#include<string.h>
int main(){


    char a[100];
    scanf("%s", a);

    // 1
    // int count = 0;
    // for (int i = 0; a[i] !='\0'; i++)
    // {
    //     count ++;
    // }
    // printf("%d", count);

    // 2
    int length = strlen(a);
    printf("%d", length);
    


    return 0;
}