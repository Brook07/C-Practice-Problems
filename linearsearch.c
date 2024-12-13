//Linear Search 
#include<stdio.h>

int i=0;

int linearsearch(int a[], int n, int key){
    for(i=0;i<n;i++){
        if(a[i]==key){
            return i + 1 ;
        }
    }
    return -1;
    
}
int main(){
    int a[5] = {1,2,3,4,5};
    int n = 5;
    int key = 5;
    
    int position = linearsearch(a, n,key);
    
    if( position != -1){
    printf("The position of the item in the list is : %d\n",position);
    }
    else{
        printf("Item Not found!!!");
        }
}