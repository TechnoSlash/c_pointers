// WAP to calculate number of words present in a line(paragraph) using ordinary array and pointer.
#include<stdio.h>

int main() {
  int i, word = 0;
  char string[100], *ptr;

  printf("Enter your string.\n");
  scanf("%[^\n]%*c", string); 

  ptr = string;
  for(i = 0; *(ptr + i) != '\0'; i++) {
    if(*(ptr + i) == ' ') {
      word++;
    }
  }
  
  word++;
  printf("The number of words in your sentence is %d\n", word);
  return 0;
}