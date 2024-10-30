// bai12_viết_lại_bài_8_9_10_11 _su_dung_lệnh_if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) printf("thang co 31 ngay \n");
	else if (n == 2) printf("thang co 28 hoac 29 ngay\n ");
	else printf("thang co 30 ngay\n ");
	char toi, ban;
	scanf_s(" %c %c", &toi, 1, &ban, 1);
	if (toi == 'B') {
		if (ban == 'K') printf("toi thang\n ");
		else if (ban == 'G') printf("toi thua\n");
		else if (ban == 'B') printf("hoa\n");
	}
	else if (toi == 'K') {
		if (ban == 'G') printf("toi thang\n ");
		else if (ban == 'B') printf("toi thua\n");
		else if (ban == 'K') printf("hoa\n");
	}
	else if (toi == 'G') {
		if (ban == 'B') printf("toi thang \n");
		else if (ban == 'K') printf("toi thua\n");
		else if (ban == 'G') printf("hoa\n");
	}
	char kitu;
	scanf_s(" %c", &kitu);
	if (kitu == 'R' || kitu == 'r') printf(" RED \n");
	else if (kitu == 'B' || kitu == 'b') printf(" BLUE \n");
	else if (kitu == 'G' || kitu == 'g') printf(" GREEN \n");
	else printf("BLACK\n");
	int x, y;
	scanf_s("%d %d", &x, &y);
	char toantu;
	scanf_s(" %c", &toantu);
	if (toantu == '+') printf("%d", x + y);
	else if (toantu == '-') printf("%d", x - y);
	else if (toantu == '*') printf("%d", x * y);
	else if (toantu == '/') printf("%d", x / y);

	return 0;
}
