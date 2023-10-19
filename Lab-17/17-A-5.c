#include<stdio.h>
void main(){
	int n,i,*ptr;
	printf("Enter the Length :");
	scanf("%d",&n);
	int a[n];
	*ptr=a;
	for(i=0;i<n;i++)
	{
		printf("Enter the Element in Array: ");
		scanf("%d",ptr+i);
	}
	printf("Entered Array is: ");
	for(i=0;i<n;i++)
	{
			printf("%d",*(ptr+i));
	}
}
