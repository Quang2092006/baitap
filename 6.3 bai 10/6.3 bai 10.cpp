// 6.3 bai 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int h;
	printf("nhap chieu cao tam giac :");
	scanf_s("%d", &h);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < h - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			if (j == 0 || j == 2 * i || i == h - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
