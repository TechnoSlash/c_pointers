#include<stdio.h>

int SIZE = 100;

int main() {
  int num[SIZE], n, large;
  printf("How many numbers?\n");
  scanf("%d", &n);

  printf("Enter all the numbers.\n");
  for( int m = 0; m < n; m++) {
    scanf("%d\t", &num[m]);
  }

  large = num[0];
  for( int i = 1; i < n; i ++) {
    if( num[i] > large) {
      large = num[i];
    }
  }

  printf("%d is largest\n", large);

  return 0;
}