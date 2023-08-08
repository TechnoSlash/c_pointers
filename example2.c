#include<stdio.h>

int main() {
  int a[] = {45, 89, 90, 20}, *pf, *pl, *null;
  pf = a;
  pl = a + 2; // array pointers can be added and subtracted with any integer value. 
  null = NULL;// valid

  printf("%ld\n", pl - pf); // only subtraction is allowed between addresses.
  printf("%d\n", *pf - *pl);
  return 0;
}