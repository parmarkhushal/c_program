
#include<stdio.h>

void main() {

	int x = 0;
	int y = 1;
	int ans;

	ans = y || x;

	printf("%d\n",ans);
	
	ans = x && y;

	printf("%d\n",ans);
}
