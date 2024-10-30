// bai16_viet_ct_kt_tam_giac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	float p;
	p = (a + b + c) / 2;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		printf("dien tich hinh tam giac la : %f ", sqrt(p * (p - a) * (p - b) * (p - c)));
	}
	else printf("khong phai hinh tam giac ");
	return 0;
}
