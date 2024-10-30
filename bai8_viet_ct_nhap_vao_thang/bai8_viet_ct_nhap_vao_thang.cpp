// bai8_viet_ct_nhap_vao_thang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("co 31 ngay ");
		break;
	case 2:
		printf("co 28 hoac 29 ngay ");
		break;
	case 4: case 6: case 9: case 11:
		printf("co 30 ngay ");
		break;
	}
	return 0;
}