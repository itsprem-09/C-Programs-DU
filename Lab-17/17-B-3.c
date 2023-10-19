#include<stdio.h>
void main(){
	int n,m,i,j;
	printf("\nEnter Number of Rows in Matrix :");
	scanf("%d",&n);
	printf("\nEnter Number of Col in Matrix :");
	scanf("%d",&m);
	int a[n][m],b[n][m],c[n][m],*ptr1,*ptr2,*ptr3;
	ptr1=a;
	ptr2=b;
	ptr3=c;
	printf("\nEnter the Value of First Matrix :");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nEnter the Value in a[%d][%d] :",i+1,j+1);
			scanf("%d",ptr1+i+j);
		}
	}
	printf("\nEnter the Value of Secound Matrix :");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nEnter the Value in b[%d][%d] :",i+1,j+1);
			scanf("%d",ptr2+i+j);
		}
	}
	printf("\nSum of Given Two Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			*(ptr3+i+j)=*(ptr1+i+j)+*(ptr2+i+j);
			printf(" %d ",*(ptr3+i+j));
		}
		printf("\n");
	}
}
