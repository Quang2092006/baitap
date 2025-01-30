// 6.3 bai 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int n, sum = 0, x;
	printf("so gia tri bac 3 la :");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		x = i * i * i;
		sum += x;
	}
	printf("%d", sum);
}

