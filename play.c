#include <stdio.h>

void text();
void display(void (*ptr)());

void main()
{
void (*p)() = &text;
display(p);
printf("And i am a Software Engineer");
}

void text()
{
	printf("My name is Akpe Caleb\n");
}

void display(void (*ptr)())
{
	return ptr();
}

