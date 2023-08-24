#include<stdio.h>
void main(){
    float s1,s2,s3,s4,s5,percentage;
    printf("Enter the marks of Subject-1:");
    scanf("%f",&s1);
    printf("Enter the marks of Subject-2:");
    scanf("%f",&s2);
    printf("Enter the marks of Subject-3:");
    scanf("%f",&s3);
    printf("Enter the marks of Subject-4:");
    scanf("%f",&s4);
    printf("Enter the marks of Subject-5:");
    scanf("%f",&s5);
    percentage=((s1+s2+s3+s4+s5)/(float)500)*100;
    printf("\nPercentage:%f",percentage);

    if (s1<33||s2<33||s3<33||s4<33||s5<33)
        {
        printf("\nYou're Failed Try Again!!");
        }
    else if (percentage>=70)
    {
        
        printf("\nCongratulation!! You passed with Distinction");
    }
    else if(percentage>=61 && percentage<=70)
    {
        printf("\nYou passed with First Class");
    }
    
    else if (percentage>=46 && percentage<=60)
    {
        printf("\nYou're Secound Class");
        }   
    else if (percentage>=36 && percentage<=45)
    {
        printf("\nYou're Passed");   
    }
    else{
        printf("\nYou're Failed Try Again!!");
    }
}