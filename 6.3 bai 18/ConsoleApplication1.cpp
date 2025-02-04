// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int n;
	do {
		printf("nhap vao so de in ra ki tu cua bang ma ascii :");
		scanf_s("%d", &n);
		printf("Ma ASCII %d t ung vs ky tu: '%c'\n\n", n, n);// tu so 0 den so 47 se in ra ' '
	} while (n != 0);
}

