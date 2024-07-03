#include<stdio.h>
#include<string.h>
int main(){


    char ar[100001];
    scanf("%s",ar);
    // printf("%s",a);
    int vowels = 0;
    int length = strlen(ar);
    // printf("%d",length);
    for (int i = 0; i < length; i++)
    {
        if (ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u')
        {
            vowels++;
        }
        
        
    }
    

    // printf("%d\n",vowels);
    int consonants = length-vowels;
    printf("%d\n",consonants);
    

    
    


    return 0;
}