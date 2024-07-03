#include<stdio.h>
#include<string.h>
void fun(char a[]){   //*a or a[]
    int length = strlen(a);
    // printf("%d\n",length);
    // printf("%c\n",a[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%c",a[i]);
    }
    
}
int main(){


    char a[]="World";
    fun(a);


    return 0;
}