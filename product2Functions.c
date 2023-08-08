#include<stdio.h>
void read(int*,int*);// we get input by using address.
void productDisplay(int,int);
int main(){
  int x,y,z;
  read(&x,&y);
  productDisplaay(x,y);
  return 0;
}
void read(int *m,int *n){
  printf("Enter two numbers.\n");
  scanf("%d%d",m,n);
} 
void displayProduct(int a,int b){
  printf("Product=%d\n",a*b);
}
// In case of pointer variable
// int *m,*n
// m, n --> address
// later on *m, *n--> value of address of m and n

// in main(){ x[ ]&2000H  y[ ]&3000H} in read(){ *m[2000H]&1000H *m[3000H]&1020H}