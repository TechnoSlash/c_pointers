#include<stdio.h>

int SIZE = 5;

int main() {
  int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE], i, j;

  // read 2 X 3 matrix
  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      printf("%d\t", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}