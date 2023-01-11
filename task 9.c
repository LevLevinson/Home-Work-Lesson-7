/*כתבו פונקציה ללא פרמטרים שקולטת
מהמשתמש 5 מחרוזות (לולאה) ובונה מחרוזת חדשה ע"י לקיחת את התו הראשון מכל
מחרוזת ובניית המחרוזת בהתאמה: התו הראשון של המחרוזת החדשה יהיה התו
הראשון של המחרוזת הראשונה שנקלטה, התו השני של המחרוזת החדשה
יהיה התו הראשון של המחרוזת השניה וכך הלאה (לא לשכוח לשים NULL בסוף)

*/



#include <stdio.h>
#include <string.h>
#pragma (warning:4996)

int main()
{
	char name[50];
	int len = 0;
	printf("Please Enter a String:\n");
	gets(name);
	len = (strlen(name) / 2);
	name[len] = NULL;
	printf("Your String is :%s\n", name);

	return 0;
}









