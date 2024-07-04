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
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // row
    int e;
    scanf("%d", &e);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", arr[e][i]);
    // }
    

    // coll
    for (int i = 0; i < row; i++)
    {
        printf("%d\n",arr[i][e]);
    }
    

  return 0;
}