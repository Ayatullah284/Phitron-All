#include<stdio.h>
int main(){


    char letter;
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z')
    {
        int ans = letter - 32;
        printf("%c", ans);

    }else{
        int ans = letter + 32;
        printf("%c", ans);
    }
    

    return 0;
}