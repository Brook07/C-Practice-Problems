
#include<stdio.h>

int factorial(int n)
 {
    if(n==0 || n==1){    
        return 1;
}
    return n * factorial(n-1);
}
 int main(){
    int n;
    printf("Enter the number U want to get factorial of : ");
    scanf("%d",&n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
 }
    if(n > 0){
        printf("Factorial of the %d is : %d",n,factorial(n));
    }
 }