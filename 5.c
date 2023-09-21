/*#include <stdio.h>
void array_copy(int src[3][3], int dst[3][3]);
int main() {
	int array[3][3] = { {100,30,67}, {89,50,12}, {19,60,90} };
	int ar[3][3];

	printf("<원본 2차원 배열>\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	array_copy(array, ar);
	return 0;
}
void array_copy(int src[3][3], int dst[3][3]) {
	int* p;
	p=src;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			dst[i][j] = *p++;
		}
	}
	printf("<복사본 2차원 배열>\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",dst[i][j]);
		}
		printf("\n");
	}
}*/