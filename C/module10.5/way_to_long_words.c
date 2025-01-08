#include <stdio.h>

int main() {
  
    int num;
    scanf("%d", &num);

    char word1[101];
    scanf("%s", &word1);

    char word2[101];
    scanf("%s", &word2);

    char word3[101];
    scanf("%s", &word3);

    char word4[101];
    scanf("%s", &word4);

    for (int i = 0; i <= 101; i++)
    {
        if (i <= 10)
        {
            printf("%s", word1);
        }
        
    }
    







  
  return 0;
}