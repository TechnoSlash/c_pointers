#include<stdio.h> 
#include<stdlib.h>

int main() {
  int x = 10, y;
  int *p;
  p = &x;
  y = *p;
  printf("Value of x: %d\n", x);
  printf("%d is stored at %p\n", x, &x);
  printf("%d is stored at %p\n", *&x, &x);
  printf("%d is stored at %p\n", *p, p);
  printf("%p is stored at %p\n", p, &p);
  printf("%d is stored at %p\n", y, &y);

  *p = 50;
  printf("Now the value of x = %d\n", x);

  return 0;
}