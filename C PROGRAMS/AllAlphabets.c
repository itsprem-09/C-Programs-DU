#include<stdio.h>
void main(){
    char character='a',capital='A';
    while((character>='a' && character<='z') || (capital>='A' && capital<='Z'))
    {
        printf("\n%C",character);
        character++;
        printf("%C",capital);
        capital++;
    }
}