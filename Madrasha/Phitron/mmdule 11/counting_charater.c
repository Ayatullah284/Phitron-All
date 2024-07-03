#include<stdio.h>
#include<string.h>
int main(){


    char s[100];
    scanf("%s",s);
    // printf("%s",s);
    int cnt[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i]-97;
        // printf("%d\n", value);
        cnt[value]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%d - %d\n", i,cnt[i]);
        int value = s[i]-97;
        if (cnt[value] != 0)
        {
            printf("%c = %d\n",value+97,cnt[value]);
        }
        cnt[value] = 0;
        
    }
    

    
    


    return 0;
}