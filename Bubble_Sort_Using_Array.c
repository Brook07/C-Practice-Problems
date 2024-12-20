#include<stdio.h>

// Function to sort an array in ascending order
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array
    bubble_sort(arr, n);
    
    printf("Sorted array in ascending order: ");
    print_array(arr, n);
    
    return 0;
}
