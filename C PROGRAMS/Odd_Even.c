#include<stdio.h>
void main(){
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Given Number is Even");
    }
    else{
        printf("Given Number is Odd");
    }
}