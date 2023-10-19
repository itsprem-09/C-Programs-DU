#include<stdio.h>
void main(){
	char a[100],i;
	int *ptr,b=0;
	ptr = &b;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		(*ptr)++;
	}
	printf(" ans:  %d",*ptr);
}
