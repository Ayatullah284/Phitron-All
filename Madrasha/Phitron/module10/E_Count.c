#include<stdio.h>
#include<string.h>
int main(){


    char a[1000001];
    scanf("%s", &a);
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        count += (a[i] - 48);
    }
    printf("%d\n", count);


    return 0;
}