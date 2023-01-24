
#include <stdio.h>

int sum(int a, int b)
{
	return (a+b);
}
int sub(int a, int b)
{
	return (a-b);
}
int mul(int a, int b)
{
	return (a*b);
}

int choice(int (*ptrrrr)(int, int), int a, int b)		//int choice(int (*po)(int, int), int a, int b)
{
	int m = ptrrrr(a, b);
	return (m);
}

int main()
{	
	int (*p)(int, int) = &sum;
	int result = choice(p, 9, 10);

	printf("%d\n", result);
	return 0;
}
