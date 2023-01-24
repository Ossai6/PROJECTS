#include <stdio.h>

int A(int a, int b, int c);
int B(int a, int b, int c);
int C(int (*ptr)(int, int, int), int a, int b, int c);

int main()
{
	int (*p)(int, int, int) = &B;
	int x = C(p, 3, 5, 9);

	printf("%d\n", x);
}

int A(int a, int b, int c)
{
	int x = (a+b)/c;
	return x;
}
int B(int a, int b, int c)
{
	int y = (a*b)*c;
	return y;
}
int C(int (*ptr)(int, int, int), int a, int b, int c)
{
	int z = ptr( a, b, c);
	return z;
}
