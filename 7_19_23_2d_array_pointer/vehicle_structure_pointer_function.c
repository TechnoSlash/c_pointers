// a program to create a structure named vehicle with its member, brand name and manufactured year. 
// Read and display the information of a vehicle using function and pointer. The program should have 
// two functions read and display.

#include<stdio.h>

struct vehicle {
  char brandName[50];
  int manufacturedYear;
};

void read(struct vehicle *);
void display(struct vehicle *);

int main() {
  struct vehicle v,*ptr;
  ptr = &v;

  read(ptr);
  display(ptr);
}

void read(struct vehicle *ptr) {
  printf("Enter vehicle brand and its manufactured year.\n");
  scanf("%s %d", ptr->brandName, &ptr->manufacturedYear);
}

void display(struct vehicle *ptr) {
  printf("Vehicle brand: %s and its manufactured year: %d\n", ptr->brandName, ptr->manufacturedYear);
}