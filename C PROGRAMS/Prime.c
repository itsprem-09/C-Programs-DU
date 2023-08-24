#include<stdio.h>
void main(){
    int i=2,n,count=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(i<=(n/2))
    {
        if(n%i==0)
        {
            count++;
            i++;
        }
        else{
            i++;
        }
    }
    if (count==0)
    {
        printf("Given Number is a Prime Number");
    }
    else
    {
        printf("Given Number is Not a Prime Number");
    }
}