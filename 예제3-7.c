#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>					// 문자열 처리와 관련된 함수가 선언된 헤더파일

int main()
{
	char fruit[20] = "strawberry";	// strawberry로 초기화

	printf("%s\n", fruit);			//strawberry 출력
	strcpy(fruit, "banana");		// fruit에 banana 복사
	printf("%s\n", fruit);			// banana 출력

	return 0;
}