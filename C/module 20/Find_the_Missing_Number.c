#include <stdio.h>

int main() {
  
    int n;
    scanf("%d",&n);
    // printf("%d\n",n);

    // int result;
    // soro
        long long int result;
        for (int i = 0; i < n; i++)
        {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

        // printf("%lld %lld %lld %lld",m,a,b,c);
        
        long long int x = a*b*c;
        long long int hiden_num = m/x;
        
        if (m%x == 0)
        {
            result = hiden_num;
        }else if (m%x!=0)
        {
            result = -1;
        }

         printf("%lld\n",result);

        }
        
        
        

// 3
// 20 5 1 1
// 18 2 3 3
// 0 10 20 30

    // int n = 10%0;
    // printf("%d\n",n);


      

  return 0;
}