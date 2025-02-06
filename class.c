#include <stdio.h>

int main() {
    char ch;
    printf("enter a single character");
    scanf("%c",&ch);
    if(ch=='e'){
      int num;
      printf("enter the number");
      scanf("%d",&num);
      if(num%2==0){
        printf("number is even");
      }
      else{
        printf("the number is odd");
      }
    }
    else{
        printf("input is not matched");
    }
    return 0;
}