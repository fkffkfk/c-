/*
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
void delete_space(char* s);
int main() {
	char string [SIZE];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s",&string);
	delete_space(string);
	return 0;
}
void delete_space(char* s) {
	int i = 0;
	printf("���� ����:");
	for (i = 0; i < SIZE; i++) {
		if (s[i] != ' ')
			printf("%c",s[i]);
		if (s[i] == '\0')
			break;
	}
}*/