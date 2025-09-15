#include <stdio.h>

int main() {
    float x = 123.12;
    float y = 12.34;

    printf("Before swap: x = %.2f, y = %.2f\n", x, y);

    float *xPtr = &x;
    float *yPtr = &y;

    float *temp;

    *temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = *temp;

    printf("After swap: x = %.2f, y = %.2f\n", x, y);
}