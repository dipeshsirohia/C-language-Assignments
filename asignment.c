// write a c program input number :
// 	1---- 10 :number is present between 1 to 10 
// 	11 ---20 :number is present between 11 to 20 
// 	otherwise :input is not matched 

// #include <stdio.h>

// int main() {
//     int a;
//     printf("Enter the number");
//     scanf("%d",&a);
//     if(a>1 && a<10){
//         printf("number is present between 1 and 10");
//     }
//     else if(a>10 && a<20){
//         printf("number is present between 10 and 20");
//      }
//      else{
//         printf("Input not matched");
//      }

//     return 0;
// }

// C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
// celsius 
// f---->c 
// fahrenheit
// c---f 
// Celsius to Fahrenheit: °F = (°C × 9/5) + 32
// Fahrenheit to Celsius: °C = (°F - 32) × 5/9

// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter your choice \n");
//     printf("Enter 'c' for farenite to celcius \n");
//     printf("Enter 'f' for celcius to farenite \n");
//     scanf("%c",&ch);
//     if(ch == 'c'){
//     float val;
//     printf("enter the value in farenite \n");
//     scanf("%f",&val);
//     float result= (val - 32) * 5/9;
//     printf("you answer %f",result);
//     }
//     else if(ch == 'f'){
//     float val;
//     printf("enter the value in celcius \n");
//     scanf("%f",&val);
//     float result = (val * 9/5) + 32;
//     printf("you answer %f",result);
//     }
//     else{
//       printf("input not matched \n");
//     }
//     return 0;
// }

// C program to enter student marks and find percentage and grade
// A college has the following rules for the grading system:
// 5 marks (grade + %)
// 1. Below 25 – F
// 2. 25 to 45 – E
// 3. 45 to 50 – D
// 4. 50 to 60 – C
// 5. 60 to 80 – B 
// 6. Above 80 – A

