// 6.3 bai 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int x = 6000000;
    float r = 1.8 / 100;
    float k=1;
    for (int i = 1; i <= 10; i++) {
        k *= (1 + r);
    }
    printf("dan so sau 10 nam la : %f", x * k);
}
