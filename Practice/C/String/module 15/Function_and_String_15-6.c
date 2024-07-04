#include<stdio.h>
#include<string.h>
void fun(char* a,int i){         // char* a | char a[]
    int len=strlen(a);
    printf("%d\n",len);
}
int main(){

    char a[20]="book";
    int lenth=strlen(a);
    printf("%d\n",lenth);
    return 0;
}
// eytar output j keno aslona tai bojlam na.