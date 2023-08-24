#include<stdio.h>
void main(){
    char c;
    printf("Enter Character:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("Entered Character is a vovel");
    }
    else{
        printf("Entered Character is a consonent");
    }
}