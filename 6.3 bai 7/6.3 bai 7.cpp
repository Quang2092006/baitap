// 6.3 bai 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int n, m, max, min;
	printf("so gia tri n la :");
	scanf_s("%d", &m);
	max = 0;
	min = 999;
	for (int i = 1; i <= m; i++) {
		scanf_s("%d", &n);
		if(n>max){
			max=n;
		}
		if (n < min) {
			min = n;
		}
	}
	printf("%d\n", max);
	printf("%d\n", min);
}
