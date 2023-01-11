#include <stdio.h>
#include <string.h>
#pragma (warning:4996)


int main()
{
	char name[50];
	printf("Please Enter Five Strings:\n");

	for (int i = 0; i < 5; i++)
	{
		gets(name);
		if (strln(name) < 1)
		{
			printf("Your String is Too Short!\n");
		}
		else
		{
			print("%c", name[1]);


		}
	}
	return 0;
}