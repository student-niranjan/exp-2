#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Output the result
    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
