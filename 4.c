#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned int)time(NULL));
	unsigned char image[10][10];

	//<수정전 이미지>
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			image[i][j] = rand() % 255;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (image[i][j] < 128)
				image[i][j] = 0;
			else
				image[i][j] = 255;
		}
	}

	//<수정후 이미지>
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%3d ", image[i][j]);
		}
		printf("\n");
	}
	return 0;
}
