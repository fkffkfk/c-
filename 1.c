/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main() {
	int x,y,sum, diff;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	get_sum_diff(x, y, &sum,&diff);
	return 0;
}
void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	if (x >= y) {
		*p_diff = x - y;
	}
	else {
		*p_diff = y - x;
	}

	printf("�� ���� ���� %d�Դϴ�.\n",*p_sum);
	printf("�� ���� ���� %d�Դϴ�.\n",*p_diff);
}*/