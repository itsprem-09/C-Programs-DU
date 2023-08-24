#include<stdio.h>
#include<math.h>
void main(){
    int n,count=0,ans,sum=0,temp,temp2;
    printf("Enter the Number:");
    scanf("%d",&n);
    temp=n;
    
    while (temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp=n;
    while (temp>0)
    {
        ans=temp%10;
        temp=temp/10;
        sum=sum+pow(ans,count);
    }
    printf("%d\n",sum);
    if (n==sum)
    {
        printf("Given Number is an Armstrong Numer.");
    }
    else
    {
        printf("Given Number is Not an Armstrong Number.");
    }
}