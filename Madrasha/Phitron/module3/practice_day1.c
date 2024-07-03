#include<stdio.h>
int main(){


    // problem 1 
    // printf("Recently I heard that you’ve achieved 95% marks in your exam.\nThis is brilliant!\nI wish you’ll shine in your life!\n    Good luck with all the barriers(/\) in your life");


    // problem 2 
    int num1;
    int num2;
    char c = '%';
    // scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int biog = num1 - num2;
    int gon = num1 * num2;
    int vag = num1 / num2;
    int vagses = num1 % num2;

    // printf("%d + %d = %d\n", num1, num2, sum);
    // printf("%d - %d = %d\n", num1, num2, biog);
    // printf("%d * %d = %d\n", num1, num2, gon);
    // printf("%d / %d = %d\n", num1, num2, vag);
    // printf("%d %c %d = %d", num1, c, num2, vagses);



    // problem 3 

    int num;

    printf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is a even.\n", num);
    }else{
        printf("%d is a odd", num);
    }
    



    return 0;
}