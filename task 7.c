
#include <stdio.h>
#include <string.h>
#pragma (warning:4996)
int main()
{
	char name[100];
	int len = 0;
	printf("Please Enter a String:\n");
	gets(name);
	len = strlen(name);
	while (len < 10)
	{
			printf("Please Enter another String:\n");
			gets(name);
			len = strlen(name);

	}
    if (len == 10)
		{

			printf("You did it! Your string is: %s ,Your String lengh is %d chars long\n", name,len);
			name[len] = NULL;

		}

	return 0;
}
