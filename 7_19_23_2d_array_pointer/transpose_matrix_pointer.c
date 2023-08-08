// to read m X n matrix and display the transpose matrix using pointer.

#include<stdio.h>

int SIZE = 100;

int main() {
  int (*a)[SIZE], i, j, n, m;

  printf("Enter the size of your square matrix (m X n).\n");
  scanf("%d %d", &m, &n);
  // read m X n matrix
  printf("Enter the values of your matrix.\n");
  for(i = 0; i < m; i++) {
    for( j = 0; j < n; j++) {
      scanf("%d", *(a + i) + j);
    }
  }
  for(i = 0; i < n; i++) {
    for( j = 0; j < m; j++) {
      printf("%d\t", *(*(a + j) + i));
    }
    printf("\n");
  }

  return 0;
}
