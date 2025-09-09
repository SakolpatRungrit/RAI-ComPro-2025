#include<stdio.h>

int main(){
   int a = 0;
   int b = 5;
   printf("Before reverse: a = %d , b = %d\n",a,b);
   int *aptr = &a;
   int *bptr = &b;
   *aptr = *aptr ^ *bptr;
   *bptr = *aptr ^ *bptr;
   *aptr = *aptr ^ *bptr;
   printf("Before reverse: a = %d , b = %d\n",a,b);
}