// write a c program input character :
// 		a :
// 			two number input :addition 

// 		s:
// 			two number input :substraction

// 		d :
// 			two number input :divide

// 		m :
// 			two number input :multiply

// 		otherwise :input is not matched 
#include <stdio.h>

int main() {
      char c;
      int a,b;
      printf("Enter two numbers \n");
      scanf("%d %d",&a,&b);

      printf("Enter a for addition \n");
      printf("Enter s for substraction \n");
      printf("Enter d for divide \n");
      printf("Enter m for multiply \n");
      scanf("%c",&c);
      if(c =='a'){
        printf("your answer == %d",a+b);
      }
      else if(c =='s'){
        printf("your answer == %d",a-b);
      }
      else if(c =='d'){
        printf("your answer == %d",a/b);
      }
       else if(c =='m'){
        printf("your answer == %d",a*b);
      }
      else {
        printf("invalid input");
      }

    return 0;
    
}