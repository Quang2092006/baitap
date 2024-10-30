// bai3_viet_ct_nhap_vao_3_so_nguyen_tim_va_in ra_so_nguyen_lon_nhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c) printf("so lon nhat la a: %d", a);
	else if (b > a && b > c) printf("so lon nhat la b: %d", b);
	else printf("so lon nhat la c : %d", c);
	return 0;
}