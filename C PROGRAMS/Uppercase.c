#include<stdio.h>
void main(){
    char c;
    printf("Enter Character:");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("Enterd Character is Uppercase");
    }
    else if(c>='a' && c<='z'){
        printf("Entered Character is Lowwercase");
    }
    else if (c>='0' && c<='9')
    {
        printf("Entered Character is Digit");
    }
    else{
        printf("Enterd Character is Special Character");
    }
    
}