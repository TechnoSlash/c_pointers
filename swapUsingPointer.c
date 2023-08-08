#include<stdio.h>
void swap(int*,int*);
int main(){
  int x,y;
  printf("Enter x and y.\n");
  scanf("%d%d",&x,&y);
  swap(&x,&y);
  printf("The value of x and y after swapping= %d and %d respectively.\n",x,y);
  return 0;
}
void swap(int *m,int *n){
  int temp;
  temp=*m;
  *m=*n;
  *n=temp;
}