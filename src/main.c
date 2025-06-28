#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int *a, int *b) {
    double double_a = *a;
    double double_b = *b;
    return double_a / double_b;
}

int main() {
    int a = 5;
    int b = 4;

    printf("Welcome to the CLI Calculator!\n");
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiply: %d\n", multiply(a, b));
    printf("Divide: %.2f\n", divide(&a, &b));

    return EXIT_SUCCESS;
}