// write a c program input character :q,w,e,r,t,y,u,i,o,p :upper line 
// 			otherwise : input is not matched 

// --------------------------------------------------------------------------
// write a c program input character :a,s,d,f,g,h,j,k,l :mid line 
// 		  otherwise :input is not matched 

// --------------------------------------------------------------------------
// write a c program input character :z,x,c,v,b,n,m, :lower line 
// 		  otherwise :input is not matched 


# include <stdio.h>
int main(){
    char c;
    printf("Enter any character \n");
    scanf("%c",&c);
    if(c=='q'||c=='w'||c=='e'||c=='r'||c=='t'||c=='y'||c=='u'||c=='i'||c=='o'||c=='p'){
        printf("mid line");
    }
    else if(c=='a'||c=='s'||c=='d'||c=='f'||c=='g'||c=='h'||c=='j'||c=='k'||c=='l'){
        printf("mid line");
    }
    else if(c=='z'||c=='x'||c=='c'||c=='v'||c=='b'||c=='n'||c=='m'){
        printf("lower line");
    }
    else{
        printf("input not matched");
    }

}