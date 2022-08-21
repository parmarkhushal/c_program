
#include<stdio.h>

void main() {

	char choice;

	printf("Enter your choice : ");
	scanf("%c",&choice);

	switch(choice) {
	
		case 97:
			printf("one\n");
			break;

		case 'b':
			printf("two\n");
			break;

		default :
			printf("default\n");
	}
}
