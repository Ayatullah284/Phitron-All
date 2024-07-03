#include<stdio.h>
#include<string.h>
int is_palindrome(char s[], int length){

    // printf("%d\n",length);
    int flag=1;
    for (int i = 0; i < length; i++)
    {
        if (s[i]!=s[(length-i)-1])
        {
            flag = 0;
            break;
        }
        
        
    }
    // printf("%d",flag);

    return flag;
}
int main(){


    char s[1000];
    scanf("%s",s);
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%c",s[i]);
    }
    int length = strlen(s);
    // printf("%d",length);
    int result = is_palindrome(s,length);




    if (result == 1)
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}