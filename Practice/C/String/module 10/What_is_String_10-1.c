#include<stdio.h>
int main(){

    char a[5];

    for (int i = 0; i < sizeof(a)/sizeof(char); i++)
    {
        scanf("%c",&a[i]);
    }
    for (int i = 0; i < sizeof(a)/sizeof(char); i++)
    {
        printf("%c\n",a[i]);
    }
    


    return 0;
}