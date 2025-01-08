#include <stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int j = 0; j < n; j++)
    {
                 char a[10001];
        scanf("%s",a);
        // printf("%s\n",a);
        // printf("%d",strlen(a));
        int capital_alphabets = 0;
        int small_alphabets = 0;
        int numbers = 0;


        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i]=='A' || a[i]=='B' || a[i]=='C' || a[i]=='D' || a[i]=='E' || a[i]=='F' || a[i]=='G' || a[i]=='H' || a[i]=='I' || a[i]=='J' || a[i]=='K' || a[i]=='L' || a[i]=='M' || a[i]=='N' || a[i]=='O' || a[i]=='P' || a[i]=='Q' || a[i]=='R' || a[i]=='S' || a[i]=='T' || a[i]=='U' || a[i]=='V' || a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='Z')
            {
                capital_alphabets += 1;
            }
        
        }
        // printf("capital_alphabets = %d\n",capital_alphabets);


        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i]=='a' || a[i]=='b' || a[i]=='c' || a[i]=='d' || a[i]=='e' || a[i]=='f' || a[i]=='g' || a[i]=='h' || a[i]=='i' || a[i]=='j' || a[i]=='k' || a[i]=='l' || a[i]=='m' || a[i]=='n' || a[i]=='o' || a[i]=='p' || a[i]=='q' || a[i]=='r' || a[i]=='s' || a[i]=='t' || a[i]=='u' || a[i]=='v' || a[i]=='w' || a[i]=='x' || a[i]=='y' || a[i]=='z')
            {
                small_alphabets += 1;
            }
        
        }
        // printf("small_alphabets = %d\n",small_alphabets);


        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9')
            {
                numbers += 1;
            }
        
        }
        // printf("numbers = %d\n",numbers);




        printf("%d %d %d\n",capital_alphabets,small_alphabets,numbers);

    }

    



  return 0;
}