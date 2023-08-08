#include<stdio.h>

struct person {
  char name[50];
  int id;
}p;

int main() {
  struct person *ptr;
  ptr = &p;

  printf("Enter name and id:");
  scanf("%s %d", ptr->name, &ptr->id);

  printf("Name: %s and id: %d\n", ptr->name, ptr->id);
  return 0;
}