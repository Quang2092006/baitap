// bai9_Viết_chương_trình_trò_chơiBúa(B)_thắng_Kéo,_thua_Giấy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
int main() {
	char toi, ban;

	printf("Chon ra K (Keo), B (Bua), G (Giay):\n");
	printf("Toi chon K, B hay G: ");
	scanf_s(" %c", &toi);

	printf("Ban chon gi: ");
	scanf_s(" %c", &ban);

	switch (toi) {
	case 'B':
		switch (ban) {
		case 'B':
			printf("Hoa\n");
			break;
		case 'K':
			printf("Toi thang\n");
			break;
		case 'G':
			printf("Ban thang\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break;
		}
		break;
	case 'K':
		switch (ban) {
		case 'B':
			printf("Ban thang\n");
			break;
		case 'K':
			printf("Hoa\n");
			break;
		case 'G':
			printf("Toi thang\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break;
		}
		break;
	case 'G':
		switch (ban) {
		case 'B':
			printf("Toi thang\n");
			break;
		case 'K':
			printf("Ban thang\n");
			break;
		case 'G':
			printf("Hoa\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break;
		}
		break;
	default:
		printf("Lua chon khong hop le!\n");
		break;
	}

	return 0;
}