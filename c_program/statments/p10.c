
#include<stdio.h>

void main() {

	int x;

	printf("Enter value : \n");
	scanf("%d",&x);

	if( x % 4 == 0 && x % 5 == 0 ) 
		printf("Divisible by 4 and 5\n");

	else 
		printf("Not divisible by 4 and 5\n");
}
