// bai10_viet_ct_xac_dinh_mau.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	char kitu;
	scanf_s("%c", &kitu);
	switch (kitu) {
	case 'R':case 'r':
		printf("RED");
		break;
	case'G':case'g':
		printf("GREEN");
		break;
	case'B':case 'b':
		printf("BLUE");
		break;
	default:
		printf("BLACK");
		break;
	}
	return 0;
}