#include<stdio.h>

int main() {
    int num, result, i;
    
    // Get input from the user for the starting number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check for valid input
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program if the input is invalid
    }
    
    printf("Hailstone sequence starting from %d:\n ", num);
    
    // Print the first term (the input number)
    printf("%d\t", num);
    
    // Generate the Hailstone sequence
    while (num != 1) {
        if (num % 2 == 0) {
            result = num / 2; // If even, divide by 2
        } else {
            result = num * 3 + 1; // If odd, multiply by 3 and add 1
        }
        
        printf("%d\t", result); // Print the next term
        num = result; // Update num to the next term
    }
    
    printf("\n");
    return 0;
}
