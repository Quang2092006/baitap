// 6.3 bai 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
void thuaso(int n) {
    printf("cac thua so nguyen to cua %d là: ", n);
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
}

int main()
{
        int n;
        printf("nhap so nguyen duong n: ");
        scanf_s("%d", &n);
        thuaso(n);
}

