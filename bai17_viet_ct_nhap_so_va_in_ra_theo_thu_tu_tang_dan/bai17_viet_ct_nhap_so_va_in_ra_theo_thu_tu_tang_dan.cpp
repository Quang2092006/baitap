// bai17_viet_ct_nhap_so_va_in_ra_theo_thu_tu_tang_dan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && b > c) {
		printf("%d\n%d\n%d\n", c, b, a);
	}
	else if (c > b && b > a) printf("%d\n%d\n%d\n", a, b, c);
	else if (b > a && a > c) printf("%d\n%d\n%d\n", c, a, b);
	else if (c > a && a > b) printf("%d\n%d\n%d\n", b, a, c);
	else if (a > c && c > b) printf("%d\n%d\n%d\n", b, c, a);
	else if (b > c && c > a) printf("%d\n%d\n%d\n", a, c, b);
	return 0;
}