// bai5_Viết_chương_rình_nhập_vào_4_số_nguyên._Tìm_và_in_ra_số _ớn_nhất.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a > b && a > c && a > d) printf("max = %d", a);
	else if (b > a && a > c && b > d) printf("max = %d", b);
	else if (c > a && c > b && c > d) printf("max = %d", c);
	else printf("max = %d", d);
	return 0;
}