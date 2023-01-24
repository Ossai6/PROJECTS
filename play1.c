#include <stdio.h>

int StrPrint(char *str);

void main()
{
	char str[24] = "Passing to a function";
	int (*ptr)(char *str) = &StrPrint;
	
	if (!(*ptr)(str))
		printf("Done!\n");
}

int StrPrint(char *str)
{
	printf("%s\n", str);
	return 0;
}
