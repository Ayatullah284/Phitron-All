#include<stdio.h>
#include<string.h>
int main(){

    

    int number;
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        char a[101];
        scanf("%s", &a);
        // printf("%s\n", a);
        int length = strlen(a);
        // printf("%d", length);
        
        if (length > 10)
        {
            printf("%c%d%c\n",a[0],length-2,a[length-1]);
            
        }else
        {
            printf("%s\n",a);
            
        }
    
    }
    
    
    


    return 0;
}