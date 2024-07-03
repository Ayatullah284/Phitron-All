#include<stdio.h>
#include<string.h>
int main(){

    // 1
    // char a[1001];
    // scanf("%s", &a);
    // int length = strlen(a);

    // char b[1001];
    // scanf("%s", &b);
    // int length2 = strlen(b);

    // printf("%d %d\n", length, length2);
    // printf("%s %s", a, b);

    // 2
    char S[1001], T[1001];
    scanf("%s %s", &S, &T);
    int lenS=strlen(S), lenT=strlen(T);

    printf("%d %d\n", lenS, lenT);
    printf("%s %s", S, T);

    




    return 0;
}