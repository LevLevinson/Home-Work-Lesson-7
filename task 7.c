/*7. קלטו מהמשתמש מחרוזת, כל עוד המחרוזת שהוא הכניס
קטנה מ 10 תוים המשיכו לבקש ממנו שיכניס עוד מחרוזת
עד שהיא תהיה בגודל 10 תוים (אפשר להניח שהיוזר לא יכניס יותר מ 100 תוים)
*/





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
	while (len <= 10)
	{
		if (len == 10)
		{

			printf("You did it! Your string is:%s\n", name);
			name[len] = NULL;

		}
		else
		{
			printf("Please Enter another String:\n");
			gets(name);
			len = strlen(name);
		}

	}


	return 0;
}
