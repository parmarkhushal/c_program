
#include<stdio.h>

void main() {

	float income;

	printf("Enter your annual income : \n");
	scanf("%f",&income);

	if( income >= 1000 && income <= 500000 ) 
		printf("0% tax on income\n");

	if( income > 500000 && income <= 1000000 )
		printf("10% tax on income\n");

	if( income > 1000000 && income <= 1500000 ) 
		printf("15% tax on income\n");

	if( income > 1500000 && income <= 2000000 ) 
		printf("20% tax on income\n");

	if( income > 2000000 ) 
		printf("30% tax on income\n");
}
