#include<stdio.h>
int main(){


    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    // min
    if (x <= y && x <= z){
        /* code */
        printf("%d ", x);
    }else if (y <= x && y <= z)
    {
        /* code */
        printf("%d ", y);
    }else{
        printf("%d ", z);
    }

    // max
    if (x >= y && x >= z){
        /* code */
        printf("%d", x);
    }else if (y >= x && y >= z)
    {
        /* code */
        printf("%d", y);
    }else{
        printf("%d", z);
    }
    
    


    return 0;
}