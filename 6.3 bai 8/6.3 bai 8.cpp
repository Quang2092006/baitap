// 6.3 bai 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int n, sum = 1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("%d", sum);
}

