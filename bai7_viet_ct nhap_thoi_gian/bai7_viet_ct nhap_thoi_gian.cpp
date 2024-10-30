// bai7_viet_ct nhap_thoi_gian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<stdio.h>
int main() {
	int gio, phut, giay, them;
	scanf_s("%d %d %d %d", &gio, &phut, &giay, &them);
	giay = giay + them;
	do {
		if (giay + them < 60) {
			giay = giay;
		}
		else {
			giay -= 60;
			phut = phut + 1;
		}
	} while (giay > 60);
	while (phut >= 60) {

		phut = phut - 60;
		gio = gio + 1;
	}
	printf("%d : %d : %d", gio, phut, giay);
	return 0;
}