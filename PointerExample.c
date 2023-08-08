#include <stdio.h>

// Function declaration
void swap(int* a, int* b);

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Function call with addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// Function definition
void swap(int* a, int* b) {
    int temp = *a;  // Dereference the pointers to access their values
    *a = *b;
    *b = temp;
}
