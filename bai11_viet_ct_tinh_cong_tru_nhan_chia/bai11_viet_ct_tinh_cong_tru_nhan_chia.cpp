// bai11_viet_ct_tinh_cong_tru_nhan_chia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	char kitu;
	scanf_s(" %c", &kitu);
	switch (kitu) {
	case '+':
		printf("%d", a + b);
		break;
	case'-':
		printf("%d", a - b);
		break;
	case'*':
		printf("%d", a * b);
		break;
	case'/':
		if (b = 0) printf(" ko chia duoc cho 0");
		printf("%d", a / b);
		break;
	default:
		printf("ko hop le ");
		break;
	}
	return 0;
}