#include<stdint.h>
#include<string.h>
int main(){

    char a[100],b[100];

    scanf("%s %s",a,b);
    // // printf("%s %s",a,b);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     // printf("%d\n",i);
    //     a[i]=b[i];

    // }
    // printf("%s %s",a,b);

            // strcpy:
    strcpy(a,b);
    printf("%s %s",a,b);
    


    return 0;
}