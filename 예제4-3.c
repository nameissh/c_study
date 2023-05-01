/*#include <stdio.h>

int main()
{
	int a = 10, b = 10;

	++a;
	--b;

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}*/



#include <stdio.h>

int main()
{
	int a = 10, b = 10;

	for (int i = 0; i < 10; i++)
	{
		a++;
		b--;
	}

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}