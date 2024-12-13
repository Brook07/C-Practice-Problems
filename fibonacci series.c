#include <stdio.h>

// Function to generate and print Fibonacci numbers up to n terms
void fibonacci(int n) {
    int sum, i;
    int a = 0, b = 1;

    // Loop starts from the 3rd term (index 2) as the first two terms are already handled in main
    for (i = 2; i < n; i++) {
        sum = a + b; // Calculate the next term in the sequence
        printf("%d\t", sum); // Print the current term
        a = b;
        b = sum;
    }
}

int main() {
    int n; 

    // Prompt the user to enter the number of terms
    printf("Enter the number of Fibonacci numbers you want to print: ");
    scanf("%d", &n);

    // Check for invalid input
    if (n <= 0) {
        printf("Invalid Input! Please enter a positive integer.\n"); // Error message for non-positive numbers
    }
 
    else if (n == 1) {
        printf("0\n");
    }
    // Handle the case when more than one term is requested
    else {
        printf("0\t1\t"); 
        fibonacci(n); // Call the function to print the remaining terms
        printf("\n");
    }
    return 0;
}
