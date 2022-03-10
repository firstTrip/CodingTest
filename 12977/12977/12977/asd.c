#include <stdio.h>

int main()
{
	char voca[30];

	printf("영단어 입력");

	scanf_s("%s", voca,30);

	printf("영단어 출력 : %s\n", voca);

	return 0;
}