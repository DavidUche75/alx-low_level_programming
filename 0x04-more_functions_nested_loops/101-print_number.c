#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n);

int main() {
    int num = 12345;
    print_number(num);
    return 0;
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    int temp = n;

    while (temp > 9) {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = n / divisor;
        _putchar(digit + '0');
        n %= divisor;
        divisor /= 10;
    }
}

