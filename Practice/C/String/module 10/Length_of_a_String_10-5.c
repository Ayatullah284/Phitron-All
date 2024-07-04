#include<stdint.h>
#include<string.h>
int main(){

    char a[100]="programming";
    int count=0;

            // for loop
    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d\n",count);
    

            // While loop
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    
    // printf("%d\n",count);
    

    int len = strlen(a);
    printf("%d\n",len);


    return 0;
}