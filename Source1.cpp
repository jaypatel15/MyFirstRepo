#include <stdio.h>

int main() {
    int i, j, sum;


    printf("Enter the first number: ");
    scanf("%d", &i);


    printf("Enter the second number: ");
    scanf("%d", &j);

    // Calculate the sum
    sum = i + j;

    // Display the result
    printf("The sum of %d and %d is %d\n", i, j, sum);

    return 0;
}