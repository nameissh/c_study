#include <stdio.h>

int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("a 초깃값: %d, b 초깃값: %d\n", a, b);
	printf("전위 (++a) * 3 = %d, 후위 (b++) * 3 = %d\n", pre, post);

	return 0;
}