#include<stdio.h>
void main(){
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    if((a%10)%2==0){
        printf("Last Digit of given number is Even");
    }
    else{
        printf("Last Digit of given number is Odd");
    }
}