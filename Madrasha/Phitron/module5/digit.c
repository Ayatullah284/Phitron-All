#include<stdio.h>
int main(){


    char y;
    scanf("%c", &y);

    if (y >= '0' && y <= '9')
    {
        /* code */
        printf("IS DIGIT");
    }else if (y >= 'a' && y <= 'z')
    {
        /* code */
        printf("ALPHA\nIS SMALL");
    }else{

        printf("ALPHA\nIS CAPITAL");
    }
    
    
    return 0;
}