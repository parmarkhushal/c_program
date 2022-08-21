
#include<stdio.h>

void main() {

	char ch;

	printf("Enter character : \n");
	scanf("%c",&ch);

	if( ch >= 'A' && ch <= 'Z' )
		printf("%c is UPPERCASE character \n",ch);

	if( ch >= 'a' && ch <= 'z' )
		printf("%c is lowercase character \n",ch);
}
