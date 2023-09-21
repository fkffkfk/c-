/*
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
void delete_space(char* s);
int main() {
	char string [SIZE];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s",&string);
	delete_space(string);
	return 0;
}
void delete_space(char* s) {
	int i = 0;
	printf("공백 제거:");
	for (i = 0; i < SIZE; i++) {
		if (s[i] != ' ')
			printf("%c",s[i]);
		if (s[i] == '\0')
			break;
	}
}*/