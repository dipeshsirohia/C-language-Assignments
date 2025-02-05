// write a c program input number and print 
// 	1:sunday
// 	2 :Monday 
// 	all week days 

// 	8--->kuch :input is not valid

#include <stdio.h>

int main() {
    int a;
    printf("Enter any number from 1 to 7");
    scanf("%d",&a);
    if(a==1){
        printf("Monday");
    }
    else if(a==2){
        printf("tuesday");
    }
    else if(a==3){
        printf("wednesday");
    }
    else if(a==4){
        printf("thrusday");
    }
    else if(a==5){
        printf("friday");
    }
    else if(a==6){
        printf("saturday");
    }
    else if(a==7){
        printf("sunday");
    }
    else{
        printf("input not matched");
    }
    return 0;
}