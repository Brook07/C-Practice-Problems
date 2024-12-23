#include<stdio.h>

int main() {
    int sum = 0, i, n, value;

    printf("Enter any number: ");
    scanf("%d", &n);

    value = n; // Store the original number to compare later
    
    for (i = 1; i < n; i++) {
        if (n % i == 0) { // Check if 'i' is a proper divisor
            sum = sum + i;
        }
    }

    if (sum == value) {
        printf("The number is a perfect number.\n");
    } else {
        printf("The number is not a perfect number.\n");
    }

    return 0;
}
