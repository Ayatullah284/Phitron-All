#include<stdio.h>
#include<string.h>
int fun(char* a,int i){     // char* a|| char a[]
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);

    return l+1;
}
int main(){

    char a[100]="hello";
    int length=fun(a,0);
    printf("%d\n",length);

    return 0;
}