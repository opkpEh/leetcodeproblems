#include <stdio.h>

void main()
{         

      int n, m, k, diff;
      scanf("%d %d %d", &n, &m, &k);

      diff= m>n ? m-n : n-m;

      while(k)
      {
            
            if(n>m)
            {
                  m++;
                  k--;
            }

            else if(m>n)
            {
                  n++;
                  k--;
            }

            else if(m==n)
            {
                  k--;
            }
            

      }
      diff= n-m;
      printf("%d", diff);

}