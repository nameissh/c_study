#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char grade;				// 학점을 입력할 변수
	char name[20];			// 이름을 입력할 배열

	printf("학점 입력: ");
	scanf("%c", &grade);
	printf("이름 입력: ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}