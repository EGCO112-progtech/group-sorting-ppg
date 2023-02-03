
#include <stdio.h>

#include "sorting.h"

int main(int argc, char *argv[]) {
  int i, j = 0, *a, n, *prime;

  n = argc - 1;
  a = (int *)malloc(sizeof(int) * n);
  prime = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    a[i] = atoi(argv[i + 1]);
    if (Isprime(a[i])) {
      prime[j] = a[i];
      j++;
    }
  }

   display(a,N);
  bubbleSort(a,N); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(a,N);
 return 0;
}


