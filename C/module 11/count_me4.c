#include <stdio.h>
#include<string.h>

int main() {


    char a[10001];
    scanf("%s",a);
    // printf("%s",a);
    int cnt[26]={0};
    for (int i = 0; i < strlen(a); i++)
    {
        int value = a[i]-'a';
        cnt[value]++;
    }
    

    for (int i = 0; i < 26; i++)
    {       
        if (cnt[i] != 0)
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
        

        
    }
    

  




  return 0;
}