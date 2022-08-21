
#include<stdio.h>

void main() {

	int x = 1;

	printf("Start code\n");

	if(--x) 
		printf("In first block\n");

	if( ++x || x++ )
		printf("In second block\n");

	printf("x = %d\n",x);
	printf("end code\n");
}
