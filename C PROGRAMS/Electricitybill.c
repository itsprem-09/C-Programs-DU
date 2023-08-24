#include<stdio.h>
void main(){
    float n,bill;
    printf("Enter Used Units:");
    scanf("%f",&n);
    if(n<=50){
        bill=n*0.5;
        bill=bill*1.2;
        printf("Your Genarated Bill is: %f",bill);
    }
    else if (n<=150)
    {
        bill=((0.5*50)+(n-50)*0.75);
        bill=bill*1.2;
        printf("Your Genarated Bill is: %f",bill);
    }
    else if (n<=250)
    {
        bill=((0.5*50)+(100*0.75)+(n-150)*1.2);
        bill=bill*1.2;
        printf("Your Genarated Bill is: %f",bill);
    }
    else{
        bill=((0.5*50)+(100*0.75)+(100*1.2)+(n-250)*1.5);
        bill=bill*1.2;
        printf("Your Genarated Bill is: %f",bill);
    }
}