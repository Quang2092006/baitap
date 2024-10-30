// bài 15_viet_ct_tinh_luong_theo_gio.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include<stdio.h>
int main() {
	int giolam, luonggio;
	float tong = 0;
	scanf_s("%d %d", &giolam, &luonggio);
	if (giolam > 40) {
		tong = giolam * 1.5 * luonggio;
	}
	else {
		tong = giolam * luonggio;
	}
	printf("tong tien luong la : %f", tong);
	return 0;
}