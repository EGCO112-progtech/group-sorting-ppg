#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, *a, n;

  n = argc - 2;
  a = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    a[i] = atoi(argv[i + 2]);
  }

  //printf("%s", argv[1]);

  if (strcmp(argv[1], "bubble") == 0) {
    bubbleSort(a, n);
      printf("\n");
    display(a, n);
    
  }
  else if (strcmp(argv[1], "insertion") == 0) {
    insertion(a, n);
      printf("\n");
    display(a, n);
   
  }
  else if (strcmp(argv[1], "selection") == 0) {
    selectionSort(a, n);
      printf("\n");
    display(a, n);
  
  }
  printf("\n");
  return 0;
}
