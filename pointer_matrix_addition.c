#include<stdio.h>
#include<stdlib.h>

int SIZE = 5;

int main() {
  int (*a)[SIZE], (*b)[SIZE], (*c)[SIZE], i, j;

  printf("Enter the values of your matrix A.\n");
  // read 2 X 3 matrix
  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      scanf("%d", *(a + i) + j);
    }
  }

  printf("Enter the values of your matrix B.\n");
  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      scanf("%d", *(b + i) + j);
    }
  }

  
  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
    }
  }

  printf("The sum of the matrix is:\n");
  for(i = 0; i < 2; i++) {
    for( j = 0; j < 3; j++) {
      printf("%d\t", *(*(c + i) + j));
    }
    printf("\n");
  }

  return 0;
}
