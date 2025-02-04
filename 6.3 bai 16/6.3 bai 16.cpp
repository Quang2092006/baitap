// 6.3 bai 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
int n;
do {
	printf("nhap 1 so tu 0 toi 9 :");
	scanf_s("%d", &n);
	switch (n) {
	case 0: printf("khong\n"); break;
	case 1: printf("mot\n"); break;
	case 2: printf("hai\n"); break;
	case 3: printf("ba\n"); break;
	case 4: printf("bon\n"); break;
	case 5: printf("nam\n"); break;
	case 6: printf("sau\n"); break;
	case 7: printf("bay\n"); break;
	case 8: printf("tam\n"); break;
	case 9: printf("chin\n"); break;
	}
} while (n >= 0 && n <= 9);
return 0;
}

