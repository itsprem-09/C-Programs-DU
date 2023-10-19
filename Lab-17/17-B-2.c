#include<stdio.h>
void main(){
	int n,i,*ptr1,*ptr2,temp;
	printf("Enter the Length :");
	scanf("%d",&n);
	int a[n],b[n];
	ptr1=a;
	ptr2=b;
	printf("\nEnter First Array :");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Element in Array: ");
		scanf("%d",ptr1+i);
	}
	printf("\nEnter Secound Array :");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Element in Array: ");
		scanf("%d",ptr2+i);
	}
	printf("\nAfter Swaping First Array is: ");
	for(i=0;i<n;i++)
	{
			temp=*(ptr2+i);
			*(ptr2+i)=*(ptr1+i);
			*(ptr1+i)=temp;
			printf("\n%d",*(ptr1+i));
	}
	printf("\nAfter Swaping Secound Array is: ");
	for(i=0;i<n;i++)
	{
			printf("\n%d",*(ptr2+i));
	}
}
