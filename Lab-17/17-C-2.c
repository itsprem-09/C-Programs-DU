#include<stdio.h>
void main(){
	int n;
	printf("Enter Length of Array :");
	scanf("%d",&n);
	int a[n],*ptr,temp,i;
	ptr = a;
	for(i=0;i<n;i++)
	{
		printf("Enter the Value in Array : ");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n/2;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*ptr+(n-i);
		*(ptr+(n-i))=temp;
		printf(" %d ",*ptr+i);
		
	}
	
}
