#include<stdio.h>
void main(){
    int basicsalary,hra,da,grosssalary;
    printf("Enter your Basic Salary:");
    scanf("%d",&basicsalary);
    if ((basicsalary>=10000) && (basicsalary<=20000))
    {
        hra=basicsalary*0.2;
        da=basicsalary*0.8;
        grosssalary=basicsalary+hra+da;
        printf("Gross Salary is: %d",grosssalary);
    }
    else if ((basicsalary>=20000)&&(basicsalary<=30000))
    {
        hra=basicsalary*0.25;
        da=basicsalary*0.9;
        grosssalary=basicsalary+hra+da;
        printf("Gross Salary is: %d",grosssalary);
    }
    else if (basicsalary>=30000)
    {
        hra=basicsalary*0.3;
        da=basicsalary*0.95;
        grosssalary=basicsalary+hra+da;
        printf("Gross Salary is: %d",grosssalary);
    }
    else
    {
        printf("Given Number is Not Valid.");
    }
}