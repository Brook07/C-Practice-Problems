#include<stdio.h>
#include<math.h>

// Custom function to calculate power without using pow() to avoid precision error
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
// Function to check whether a number is an Armstrong number
int armstrong(int num) {
    int sum = 0, rem, digits = 0, temp = num;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    // Reset temp to num
    temp = num;

    // Calculate the sum of each digit raised to the power of digits
    while (temp > 0) {
        rem = temp % 10;
        sum = sum + power(rem,digits);
        temp = temp / 10;
    }
    return sum;
}

// Main function
int main() {
    int num, result;

    printf("Enter any number: ");
    scanf("%d", &num);

    result = armstrong(num);

    if (result == num) {
        printf("%d is an Armstrong Number.\n", num);
    } else {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}
