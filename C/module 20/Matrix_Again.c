#include <stdio.h>

int main() {
  
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }


    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row-1)
            {
               printf("%d ",arr[i][j]);
               
            }
            
        }
        
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (j== col-1)
             {
                printf("%d ",arr[i][j]);
             }
            
        }
        
    }



  return 0;
}