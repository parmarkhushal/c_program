
#include<stdio.h>

void main() {

	char userInput;

	printf("Enter the character : \n");
	scanf("%c",&userInput);

	if(userInput >= 'A' && userInput <= 'Z') {
	
		printf("You enter Uppercase char\n");
	}

	if(userInput >= 'a' && userInput <= 'z') {
	
		printf("You enter Lowercase char\n");
	}
}
