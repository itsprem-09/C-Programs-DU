#include<stdio.h>
void main(){
	int i=1,n,j;
	float fac=1.0,sum=1.0;
	
	printf("Enter Number For Given Value: ");
	scanf("%d",&n);
	
	while(i<=n){
		for(j=i;j<=i;j++){
		fac=fac*j;
		}
	sum=sum+((float)(1)/(fac));
		i++;
	}
	printf("Factorial of %f",sum);
}
