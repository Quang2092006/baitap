// 6.3 bai 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>



int main() {
    int height;
    printf("Nhập chiều cao tam giác: ");
    scanf_s("%d", &height);
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
        }
            printf("\n");
    }
    return 0;
}