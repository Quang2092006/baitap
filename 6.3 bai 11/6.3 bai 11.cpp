// 6.3 bai 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int a, b;
	printf("nhap chieu dai va chieu rong :");
	scanf_s("%d %d", &a, &b);
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
