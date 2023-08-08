#include<stdio.h>

int main() {
  int *arr[3];
  int i = 30, j = 20, k = 40, m;
  arr[0] = &i;
  arr[1] = &j;
  arr[2] = &k;

  for(m = 0; m < 3; m++) {
    printf("%d\t",*arr[m]);
  }
  return 0;
}