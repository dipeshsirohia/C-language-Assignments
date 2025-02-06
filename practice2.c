// - Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.   
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd

# include <stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
   if(num > 0){
     if(num%2 == 0){
      printf("positive even");
     }else{
       printf("positive odd");
     }
   }
   else{
     if(num % 2 == 0){
       printf("negative even");
     }else{
        printf("negative odd");
     }
   }          

}
