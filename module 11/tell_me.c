#include <stdio.h>

int main() {
  
    int t;
    scanf("%d",&t);
        for (int j = 0; j < t; j++)
        {
          int n;
          scanf("%d",&n);
          // printf("%d",n);
          int a[100000];
          for (int i = 0; i < n; i++)
          {
           scanf("%d",&a[i]);
           // printf("%d ",a[i]);
          }
          int x;
           scanf("%d",&x);
           // printf("%d\n",x);
           int result = 0;
          for (int i = 0; i < n; i++)
           {
              if (a[i]==x)
            {
              result += 1;
              break;
            }
          }


          if (result == 1)
          {
             printf("YES\n");
          }else{
             printf("NO\n");
          }
          
        }
    
  
    

  
    
    


  return 0;
}