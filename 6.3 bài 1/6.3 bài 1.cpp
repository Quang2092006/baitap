// 6.3 bài 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;

    while (1) {
        printf("Nhap ma ASCII: ");
        scanf_s("%d", &n);

        if (n == -1) {
            printf("ket thuc chuong trinh.\n");
            break;
        }

        if (n < 0 || n > 127) {
            printf("vui long nhap so trong khaong tu 0 den 127.\n");
            continue;
        }

        printf("Ma ASCII %d t ung vs ky tu: '%c'\n\n", n, n);
    }

    return 0;
	}

