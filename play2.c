#include <stdio.h>

int str_len(char *s);
int display(int (*ptr)(char *), char *s);

void main()
{
	char name[] = "Akpe Caleb Chukwuemeka";
	int (*p)(char *s) = &str_len;

	int y = display(p, name);
	printf("Hello\n");
	printf("My full name is %s\nThe length of my name is %d\n", name, y);
}

int str_len(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count ++;
		i++;
	}
	return count;
}

int display(int (*ptr)(char *), char *s)
{
	int x = ptr(s);
	return x;
}
