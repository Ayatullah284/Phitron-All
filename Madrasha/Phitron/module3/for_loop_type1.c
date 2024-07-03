#include<stdio.h>
int main(){
    int i;
    
    for (i = 0; i <= 10; i++)
    {
        // printf("%d\n", i);

    }

        for (i = 2; i <= 20; i+=2)
    {
        // printf("%d\n", i);

    }

        for (i = 1; i <= 20; i++)
    {
        if(i%2==0){
            // printf("%d - even\n", i);
        }else{
            // printf("%d - odd\n", i);
        }
        

    }

        for (i = 20; i >= 0; i--)
    {
        // printf("%d\n", i);

    }




    long long int count ;
    scanf("%lld", &count);
    for ( i = 0; i <= count; i++)
    {
        if ( i==7)
        {
            // break;  
            continue; 
        }
        printf("%d\n", i);
         
    }

    

    return 0;    
}