#include <stdio.h>
#include <string.h>

int new_age(int a, int b, int c);
int age(int (*ptr)(int, int, int), int a, int b, int c);

int main()
{
	printf("What is your first name, i'd love to know you\n");
	char name[10];
	scanf("%s", &name);
	printf("Hey %s, welcome to my game.\nShall we play?\nYes or No\n", name);
	char choice[4];
	scanf("%s", &choice);
	if (strcmp("Yes", choice) == 0 || strcmp("No", choice) == 0)
	{
		if (strcmp("No", choice) == 0)
		{
			printf("%s, it hurts me to see you go, goodbye!\n", name);
		}
		else
		{
			printf("Enter your year of birth\n");
			int a;
			scanf("%d", &a);
			printf("Enter your present age\n");
			int b;
			scanf("%d", &b);
			printf("%s, its time to enter a year in the future, i will tell you how old you'd be and how your life would look like\n", name);
			int c;
			scanf("%d", &c);
			int (*p)(int, int, int) = &new_age;
			int result = age(p, a, b, c);
			printf("%s, you will be %d years old in %d\n", name, result, c);
			
			if (result < 18)
			{
				printf("Hey %s, you are still young, full of life and energy. remain focused and you will reach your potential", name);
			}
			if (result >= 18 && result <= 50)
			{
				printf("%s, you are doing great. you will have everything you ever dreamt of, have fun!", name);
			}
			if (result > 50)
			{
				printf("Wow, %s. you have life a worthy life, you will age gracefully. Happy Retirement %s", name, name);
			}
		}
	}
	else
	{
		printf("%s, kindly enter Yes or No lets have fun!", name);
	}
}

int new_age(int a, int b, int c)
{
	int diff, years, NewAge;

	diff = c - b;
	years = diff - a;
	NewAge = b + years;
	return NewAge;
}

int age(int (*ptr)(int, int, int), int a, int b, int c)
{
	int x = ptr(a, b, c);
	return x;
}
