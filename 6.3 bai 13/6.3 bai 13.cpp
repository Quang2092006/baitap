// 6.3 bai 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Fn=fn-1 +fn-2

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhập số hạng thứ n của dãy Fibonacci: ");
    scanf_s ("%d", &n);
    printf("Số hạng thứ %d của dãy Fibonacci là: %d\n", n, fibonacci(n));
    return 0;
}
