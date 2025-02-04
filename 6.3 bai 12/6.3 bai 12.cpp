// 6.3 bai 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<math.h>
int kt(int n) {
    if (n == 1) return 0;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) return 0;
     }
    return 1;
}
int main()
{
    int n;
    printf("nhap so bat ki :");
    scanf_s("%d", &n);
    if (kt(n)) {
        printf("day la so nguyen to");
    }
    else {
        printf("day ko phai so nguye to");
    }
}

