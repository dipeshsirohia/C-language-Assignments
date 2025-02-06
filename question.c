#include <stdio.h>

int main() {
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>40){
        printf("number is greater than 40");
    }
    else if(a>15){
        printf("number is greater than 15");
    }
    else if(a>5){
        printf("number is greater than 5");
    }
    else{
        printf("number is less than 5");
    }
    return 0;
}