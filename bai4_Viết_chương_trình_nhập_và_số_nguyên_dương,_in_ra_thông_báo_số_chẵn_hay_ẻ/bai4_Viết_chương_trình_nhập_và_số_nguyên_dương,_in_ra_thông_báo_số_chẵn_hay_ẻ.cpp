// bai4_Viết_chương_trình_nhập_và_số_nguyên_dương,_in_ra_thông_báo_số_chẵn_hay_ẻ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0) printf("day la so chan !");
	else printf("day la so le !");
	return 0;
}
