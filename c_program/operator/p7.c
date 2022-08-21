
#include<stdio.h>

void main() {

	int x = 10;
	int ans;

	ans = ++x + ++x + ++x;

	printf("%d\n",ans);
	printf("%d\n",x);
}
