/*���� ������� ��� ������� ������
������� 5 ������� (�����) ����� ������ ���� �"� ����� �� ��� ������ ���
������ ������ ������� ������: ��� ������ �� ������� ����� ���� ���
������ �� ������� ������� ������, ��� ���� �� ������� �����
���� ��� ������ �� ������� ����� ��� ���� (�� ����� ���� NULL ����)

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









