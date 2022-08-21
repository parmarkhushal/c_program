
#include<stdio.h>

void main() {

	int ram;

	printf("Enter laptop's RAM : ");
	scanf("%d",&ram);

	if(ram >= 8) 
		printf("Laptop is able to run Android Studio, VS code and Chrom at a time \n");

	else
		printf("Laptop is unable to run Android Studio \n");
}
