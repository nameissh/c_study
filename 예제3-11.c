#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char grade;				// ������ �Է��� ����
	char name[20];			// �̸��� �Է��� �迭

	printf("���� �Է�: ");
	scanf("%c", &grade);
	printf("�̸� �Է�: ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}