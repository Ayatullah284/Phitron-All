#include <stdio.h>

int main() {
  
  int n,s,k;
  scanf("%d",&n);

  int N=0;
  if (n == 1)
  {
    N=6;
  }else if (n == 3)
  {
    N=7;
  }else if (n==5)
  {
    N=8;
  }else if (n==7)
  {
    N=9;
  }else if (n==9)
  {
    N=10;
  }else if (n==11)
  {
    N=11;
  }else if (n==13)
  {
    N=12;
  }else if (n==15)
  {
    N=13;
  }else if (n==17)
  {
    N=14;
  }else if (n==19)
  {
    N=15; 
  }else if (n==21)
    {
      N=16;
    }
  
  
  
  
  s=N-1;
  k=1;
  
  
  
  
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= s; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
        printf("*");
    }
    s--;
    k=k+2;
    printf("\n");
    
  }

    for (int j = 0; j < 5; j++)
    {

        printf("     ");
      for (int k = 0; k < n; k++)
      {
        printf("*");
      }
      printf("\n");
      
    }
    

  

  return 0;
}