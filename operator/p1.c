
#include<stdio.h>

int a = 10;

void fun() {
	
	int x = 10;

	printf("In fun\n");	
}

void main() {

	int y = 30;

	printf("Start main\n");
	fun();
	printf("End main\n");
}
