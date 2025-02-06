// - Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.   
# include <stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int r=a+3;
    while(r<=100){
        printf("%d \n",r);
        r=r+a;
    } 
   
}