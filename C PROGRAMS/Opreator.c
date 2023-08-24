#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the First Number:");
    scanf("%d",&a);
    printf("Enter the Secound Number:");
    scanf("%d",&b);
    printf("Choose From Given Option:");
    printf("\n1. Sum");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Devision\n");
    scanf("%d",&c);
    if(c==1){
        printf("Sum of Given Number is: %d",a+b);
    }
    else if(c==2)
    {
        printf("Substraction of Given Number is: %d",a-b);
    }
    else if(c==3)
    {
        printf("Multiplication of Given Number is: %d",a*b);
    }
    else if(c==4)
    {
        printf("Devision of Given Number is:%f",(float)a/(float)b);
    }
    else{
        printf("Invalid Choice");
    }
}