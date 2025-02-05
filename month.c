// write a c program input number and print 
// 	1 :janu
// 	2 :feb 
// 	3 :march 
// 	total months 

// 	otherwise :input is not matched 

#include <stdio.h>

int main() {
    int a;
    printf("Enter any number from 1 to 12 \n");
    scanf("%d",&a);
    if(a==1){
        printf("jan");
    }
    else if(a==2){
        printf("feb");
    }
    else if(a==3){
        printf("mar");
    }
    else if(a==4){
        printf("apr");
    }
    else if(a==5){
        printf("may");
    }
    else if(a==6){
        printf("june");
    }
    else if(a==7){
        printf("july");
    }
    else if(a==8){
        printf("aug");
    }
    else if(a==9){
        printf("sep");
    }
    else if(a==10){
        printf("oct");
    }
    else if(a==11){
        printf("nov");
    }
    else if(a==12){
        printf("dec");
    }
    
    else{
        printf("input not matched");
    }
    return 0;
}