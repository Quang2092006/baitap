#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b) printf("so lon nhat la a : %d", a);
	else printf("so lon nhat la b : %d", b);
	return 0;
}