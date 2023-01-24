#include <stdio.h>

void print_name_as_is(char *name)
{
	printf("hello, my name is %s\n", name);
}

void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}

int main()
{
	print_name("Bob Marley", print_name_as_is);
	printf("\n");
	return 0;
}
