// to sort n numbers given by user in descending order using pointer and display second largest number
#include<stdio.h>
#define SIZE 100

int main() {
  int n, *ptr, i, number[SIZE];
  printf("Enter the number of numbers.\n");
  scanf("%d", &n);

  ptr = number;
  for(i = 0; i < n; i ++) {
    printf("Enter Number %d: ", i+1);
    scanf("%d", ptr + i);
  }

  for(i = 0; i < n; i ++) {
    for( int j = i + 1;j < n ;j++) {
      if(*(ptr + i) < *(ptr + j)) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }

  printf("The second largest number is %d\n", *(ptr + 1));

  return 0;
}