#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d;
    printf("Given Equation is ax^2+bx+c=0");
    printf("\nEnter the Value of a:");
    scanf("%f",&a);
    printf("Enter the Value of b:");
    scanf("%f",&b);
    printf("Enter the Value of c:");
    scanf("%f",&c);
    d=sqrt((b*b)-(4*a*c));
    printf("Root of Given Equation is:%f",d);
}