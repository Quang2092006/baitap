// 6.3 bai 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int a, b;
    printf("nhap gia tri cua 2 so :");
    scanf_s("%d %d", &a, &b);
    int originala = a, originalb = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int uscln = a;
    int bscnn = (originala * originalb) / uscln;
    printf("uscln %d\n", uscln);
    printf("bscnn %d",bscnn);
    
}

