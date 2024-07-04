#include<stdio.h>
int main(){

        // loop 1
    for (int i = 1; i <= 5; i++)
    {
        // printf("%d\n",i);
    }

        // loop 2
    for (int i = 5; i >= 1; i--)
    {
        // printf("%d\n",i);
    }

        // loop 3
        int sum=0;
    for (int i = 1; i <= 5; i++)
    {
        sum+=i;
    }
    // printf("%d\n",sum);

        // loop 4
    for (int i = 1; i <= 10; i++)
    {
        if (i%2==0)
        {
            // printf("even-%d\n",i);
        }else{
            // printf("odd-%d\n",i);
        }
        
    }

        // loop 5
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            break;
        }
        // printf("%d\n",i);
        
        
    }

        // loop 6
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            continue;;
        }
        // printf("%d\n",i);
        
        
    }








    //7
    // While loop 
     int i=1;
    while (i<=5)
    {
        // printf("%d\n",i);
        i++;
    }
    

    //8
    // Do While loop 
     int j=100;
    do
    {
        // printf("%d\n",j);
    } while (j<=5);
    
    



    return 0;
}