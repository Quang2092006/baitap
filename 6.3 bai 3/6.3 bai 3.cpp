// 6.3 bai 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int n;
    printf("so tu nhien bat ki :  ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d la uoc so cua %d\n", i, n);
        }
      
    }
}

