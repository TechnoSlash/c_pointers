// to read m X n matrix and display the transpose matrix using pointer.

#include<stdio.h>
#include<stdlib.h>

void transpose(int (*)[], int (*)[], int , int);

int SIZE = 100;

int main() {
  int (*a)[SIZE],(*at)[SIZE], i, j, n, m;

  a = malloc(2 * sizeof(*a));
  at = malloc(2 * sizeof(*at));

  printf("Enter the size of your square matrix (m X n).\n");
  scanf("%d %d", &m, &n);
  // read m X n matrix
  printf("Enter the values of your matrix.\n");
  for(i = 0; i < m; i++) {
    for( j = 0; j < n; j++) {
      scanf("%d", *(a + i) + j);
    }
  }
  
  transpose(a, at, m , n);

  printf("The transpose of the given matrix is \n");
  for(i = 0; i < n; i++) {
    for( j = 0; j < m; j++) {
      printf("%d\t", *(*(at+i)+j));
    }
    printf("\n");
  }

  free(a);
  free(at);

  return 0;
}

void transpose(int (*a)[SIZE], int (*at)[SIZE], int m, int n) {
  int i, j;
  for(i = 0; i < n; i++) {
    for( j = 0; j < m; j++) {
      *(*(at +i) + j) = *(*(a + j) + i);
    }
  }
}
