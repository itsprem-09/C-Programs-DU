#include<stdio.h>
void main(){
	int n,row,col,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("%d",col);
			sum=sum+col;
		}
		
		printf("\n");
	}
			printf("Sum is=%d",sum);
}
