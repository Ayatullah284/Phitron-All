#include<stdio.h>
#include<limits.h>
int main(){


    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);


    if (x <= y&z || x <= 1)
    {
        long long int a = y - x;
        long long int b = z - x;

        long long int c = (x-x) / 2;
        if (c <= b)
        {
            long long int result = c + x;
            printf("%lld", result);
        }else{
            printf("%lld", a + x);
        }
        
    }else if (y <= x&z)
    {
        long long int a = x - y;
        long long int b = z - y;

        long long int c = a / 2;
        if (c <= b)
        {
            long long int result = y + c;
            printf("%lld", result);
        }else{
            printf("%lld", y + z);
        }
        
    }else if (z <= x&y)
    {
        printf("%lld", z);
    }
    
    
    


    return 0;
}