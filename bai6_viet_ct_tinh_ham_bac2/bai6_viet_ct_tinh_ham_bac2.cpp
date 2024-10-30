// bai6_viet_ct_tinh_ham_bac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	float denta;
	denta = (float)pow(b, 2) - 4 * a * c;
	float x1, x2;

	if (denta < 0)printf("phuong trinh vo nghiem !");
	else if (denta == 0) {
		printf("phuong trinh co nghiem kep x1 = x2  la : %d", -b / (2 * a));
	}
	else {
		x1 = (-b - sqrt(denta)) / (2 * a);
		x2 = (-b + sqrt(denta)) / (2 * a);
		printf("phuong trinh co 2 nghiem phan biet la \n");
		printf("x1= %.1f\n", x1);
		printf("x2= %.1f", x2);
	}
	return 0;
}