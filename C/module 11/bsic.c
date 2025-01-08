#include <stdio.h>

int main() {
  

    int n;
    scanf("%d",&n);
    // printf("%d\n",n);
    for (int j = 0; j < n; j++)
    {
        int a[3];
        int m1;
        int m2;
        int D1;
    
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&a[i]);
            // printf("%d ",a[i]);
            if (i==0)
            {
                m1 = a[i];
            }
            if (i==1)
            {
            m2 = a[i];
            }
            if (i==2)
            {
                D1 = a[i];
            }
        
        }
        // printf("%d\n",m1);
        // printf("%d\n",m2);
        // printf("%d\n",D1);

        int M2 = m1+m2;
        int D2 = D1 * m1/M2;
        // printf("%d", D2);
        int result = D1-D2;
        printf("%d\n",result);


        
    }
    
    
    
    


  return 0;
}