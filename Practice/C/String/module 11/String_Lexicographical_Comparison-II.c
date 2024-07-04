#include<stdio.h>
#include<string.h>
int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);

    //     // while loop
    // int i=0;
    // while (1)
    // {
    //     if (a[i]=='\0'&&b[i]=='\0')
    //     {
    //         printf("Same\n");
    //         break;
    //     }else if (a[i]=='\0')
    //     {
    //         printf("A soto\n");
    //         break;
    //     }else if (b[i]=='\0')
    //     {
    //         printf("B soto\n");
    //         break;
    //     }
        

    //     if (a[i]==b[i])
    //     {
    //         i++;
    //     }else if (a[i]<b[i])
    //     {
    //         printf("A soto\n");
    //         break;
    //     }else{
    //         printf("B soto\n");
    //         break;
    //     }
        
        
    // }






        // // for loop
        // for (int i = 0; ;)
        // {
        //         if (a[i]=='\0'&&b[i]=='\0')
        //     {
        //         printf("Same\n");
        //         break;
        //     }else if (a[i]=='\0')
        //     {
        //         printf("A soto\n");
        //         break;
        //     }else if (b[i]=='\0')
        //     {
        //         printf("B soto\n");
        //         break;
        //     }
            
            
        //     if (a[i]==b[i])
        //     {
        //         i++;
        //     }else if (a[i]<b[i])
        //     {
        //         printf("A soto\n");
        //         break;
        //     }else{
        //         printf("B soto\n");
        //         break;
        //     }
        // }
        
    

                // strcmp()
    int result=strcmp(a,b);          //  0> - soto
                                     //  0  - same
                                     //  0< - boro
    if (result < 0)
    {
        printf("A soto\n");
    }else if (result==0)
    {
        printf("Same\n");
    }else{
        printf("B boro\n");
    }
    
    




    return 0;
}