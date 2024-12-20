#include<stdio.h>

int prime_number(int n){
    int count=0,i=1;
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n,result;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    if (n < 0) {
        printf("Negative numbers cannot be prime.\n");
    }
    result=prime_number(n);

    if(result==2){ 
        printf("%d is Prime Number",n);
    }
    else{
         printf("%d is not Prime Number",n);
    }

}