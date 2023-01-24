#include <stdio.h>
#include <string.h>

int main()
{
	char name[]="Caleb";
	char cm[10];
	int k;
	gets(cm);
	k = strcmp(name, cm);
	if (k==0)
		printf("SAME");
	else
		printf("NOT SAME");
	return 0;
}
