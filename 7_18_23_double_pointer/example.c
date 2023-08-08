#include<stdio.h>

int main() {
  int i = 5;
  int *ptr1, **ptr2;
  ptr1 = &i;
  ptr2 = &ptr1;
  
  printf("The value of i = %d.\n", i);
  printf("The value of ptr1 = %d.\n", *ptr1);
  printf("The value of ptr2 = %d.\n", **ptr2);
  printf("The address of i = %p.\n", &i);
  printf("The value assigned to ptr1 = %p  and value at address %d.\n", ptr1, *ptr1);
  printf("The value assigned to ptr2 = %p  and single indirection value = %p and double indirection value = %d.\n", ptr2, *ptr2, **ptr2);

  return 0;
}