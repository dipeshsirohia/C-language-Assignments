// write a c program input character and check character is vowel and consonant ?
# include <stdio.h>
int main(){
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    if(c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u'){
        printf("Ypu enterd a vowel");
    }
    else{
        printf("You enterd a consonent");
    }


    return 0;
}