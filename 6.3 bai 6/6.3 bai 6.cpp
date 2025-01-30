// 6.3 bai 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{

        int n, sum = 0;
        printf("Nhập giá trị n: ");
        scanf_s("%d", &n);

        int i = 1;
        while (i <= n) {
            if (i % 2 != 0) {
                sum += i * i;  // Sử dụng i*i thay vì i^2
            }
            i++;  // Luôn tăng i sau mỗi lần lặp
        }

        printf("Tổng bình phương các số chẵn: %d\n", sum);
        return 0;
   
}

