#include<stdio.h>
int main(){


    char a[100],b[100];
    scanf("%s %s",a,b);
    // printf("%s %s\n",a,b);

    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Same\n");
            break;

        }else if (a[i]=='\0')
        {
            printf("A soto\n");
            break;
        }else if (b[i]=='\0')
        {
            printf("B soto\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }else if (a[i] < b[i])
        {
            printf("A soto\n");
            break;
        }else{
            printf("B soto\n");
            break;
        }
        
        
        
        
        
    }
    


    return 0;
}