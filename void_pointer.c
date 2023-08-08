#include<stdio.h> 
#include<stdlib.h>

int main() {
  int a = 10;
  float b = 4.56;
  char *ch = "NEPAL";
  void *vptr;
  vptr = &a;
  printf("Value of v ptr *: %d\n", *(int*)vptr);
  vptr = &b;
  printf("Value of v ptr *: %f\n", *(float*)vptr);
  vptr = &ch;
  printf("Value of v ptr *: %s\n", *(char**)vptr);
  return 0;
}