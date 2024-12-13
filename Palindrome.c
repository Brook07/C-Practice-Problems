//Program to check wheather a number is palindrome or not
#include<stdio.h>

int main (){
    int num,reverse=0,rem,value;
    printf("Enter any number : ");
    scanf("%d",&num);
    // Store the original number
    value = num;
    
    //logic to check a number is plaindrome or not
    while(num>0){ 
        rem = num%10;
        reverse = reverse * 10 + rem;
        num = num/10;
    }

    // Check if the reversed number is equal to the original
    if(reverse == value){
        printf("%d is a plaindrome",value);
    }
    else if(reverse != value){
        printf("%d is not a plaindrome",value);
    }
    else{
        printf("Invaild Input");
    }
    return 0;
}