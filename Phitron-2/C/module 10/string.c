#include<stdio.h>
#include<string.h>
int main(){

    // char a[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &a[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    // int b[5];
    // printf("char: a-> %d %d\n", sizeof(a), sizeof(char));
    // printf("int: b-> %d %d\n", sizeof(b), sizeof(int));

    char a[18];
    // gets(a);
    fgets(a, 18, stdin);

    printf("%s\n",&a);
    
    return 0;
}