// bai13_viet_ct_tinh_diem_3_mon_toan_ly_hoa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<stdio.h>
int main() {
	int a, b, c;
	printf("diem 3 mon toan ly hoa :");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b + c >= 15 && a >= 4 && b >= 4 && c >= 4) {
		printf("dau \n");
		if (a > 5 && b > 5 && c > 5) {
			printf("hoc deu cac mon\n");
		}
		else printf("hoc chua deu cac mon\n");
	}
	else printf("thi hong !");
	return 0;
}