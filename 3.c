/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point {
	int x;
	int y;
};
int equal(struct point* p1, struct point* p2);
int main() {
	struct point p1,p2;
	printf("2���� ������ �� ��(p1)�� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("2���� ������ �� ��(p2)�� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p2.x, &p2.y);
	equal(&p1, &p2);
	return 0;
}
int equal(struct point* p1, struct point* p2) {
	if ((p1->x == p2->x) && (p1->y == p2->y)){
		printf("(%d,%d) == (%d,%d)\n", p1->x, p1->y, p2->x, p2->y);
		return 1;
}
	else {
		printf("(%d,%d) != (%d,%d)\n", p1->x, p1->y, p2->x, p2->y);
		return 0;
	}
}*/