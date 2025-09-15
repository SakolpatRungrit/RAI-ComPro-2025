#include <stdio.h>


int main() {
    struct CStruct {
    int a;
    int b;
    int c;
    };
    struct CStruct coreStruct;
    coreStruct.a = 2;
    coreStruct.b = 4;

    int sum = coreStruct.a + coreStruct.b;
    int *sumPtr = &sum;

    coreStruct.c = *sumPtr;

    printf("coreStruct.a: %d\n", coreStruct.a);
    printf("coreStruct.b: %d\n", coreStruct.b);
    printf("coreStruct.c: %d\n", coreStruct.c);
}