#include <stdio.h>



int sum(int x, int y){

    int sum = x+y;


    return sum;
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int result = sum(n,m);
    printf("%d\n",result);
  return 0;
}