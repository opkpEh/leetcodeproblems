#include <stdio.h>

int main() {
  int n, m, k, diff;
  scanf("%d %d %d", &n, &m, &k);

    // if(n>m)
    // {
    //     diff=n-m;
    // }

    // else
    // {
    //     diff=m-n;
    // }

    diff= n-m;

  if (diff == 0) {
    printf("0\n");
    return 0;
  }

  for (int i = 0; i < k; i++) {
    
    if (diff % 2 == 0) {
      if (n < m) {
        n++;
      } else {
        m++;
      }
    } else {
  
      if (n > m) {
        n--;
      } else {
        m--;
      }
    }

   
    if (n > m) {
      diff = n - m;
    } else {
      diff = m - n;
    }


    if (diff == 0) {
      break;
    }
  }


  printf("%d\n", diff);

  return 0;
}
