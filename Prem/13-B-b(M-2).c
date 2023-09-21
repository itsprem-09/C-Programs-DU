#include<stdio.h>
void main(){
	int i,j,a=1;
	for(i=1 ; i<=5 ; i++){
		for(j=0 ; j<=i-1 ; j++){
			
			
			printf("%d ",((i+j)%2));
			a--;
		}
		printf("\n");
		}
		
	}

