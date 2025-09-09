#include<stdio.h>

int main(){
   int size = 6,temp = 0;
	int array[] = { 3, 1, 2, 4, 5, 6 };
   for(int i = 0; i< size ; i++)
   {
      temp += *(array+i);
   }
   printf("The sum of array is: %d\n",temp);
}