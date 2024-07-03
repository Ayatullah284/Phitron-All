#include<stdio.h>
#include<string.h>
int main(){


    
    // char a[18];
    // gets(a);
    // printf("%s\n", a);

    // 2
    char a[100];
    fgets(a, 50,stdin);
    printf("%s\n", a);


    return 0;
}