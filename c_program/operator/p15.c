
#include<stdio.h>

void main() {

//	int x = 10,20,30;
//	printf("%d\n",x);

	int y = {10,20,30};
	printf("%d\n",y);

	int z = (10,20,30);
	printf("%d\n",z);

	printf("%p\n",&y);
}
