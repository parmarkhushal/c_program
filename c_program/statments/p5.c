
#include<stdio.h>

void main() {

	char tLight;

	printf("Traffic Light Signal : ");
	scanf("%c",&tLight);

	if( tLight == 'R' )
		printf("Signal Light is Red - STOP\n");

	if( tLight == 'O' )
		printf("Signal Light is Orange - WAIT\n");

	if( tLight == 'G' )
		printf("Signal Light is Green - GOOO...!\n");
}
