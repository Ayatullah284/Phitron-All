#include <stdio.h>

int main() {
  
  
    int t;
    scanf("%d",&t);
    int T=0;
    int P=0;
    

    for (int i = 0; i < t; i++)
    {

    int n;
    scanf("%d",&n);
    char tp[n];
    // for (int i = 0; i < n; i++)
    // {
    //    scanf("%c",&tp[i]);
    // }
    scanf("%s",tp);

    // work soro
      for (int i = 0; i < n; i++)
    {
      if (tp[i]=='T')
        {
          T++;
        }else if (tp[i]=='P')
        {
          P++;
        }
    }

     if (T>P)
    {
       printf("Tiger\n");
    }else if (P>T)
    {
       printf("Pathaan\n");
    }else if (T==P)
    {
       printf("Draw\n");
    }
    T=0;
    P=0;
    }
    
    
  
  return 0;
}