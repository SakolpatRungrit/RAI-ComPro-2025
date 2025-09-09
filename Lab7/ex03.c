#include<stdio.h>

int main(){
   int array[] = { 3, 1, 2, 4, 5, 6 };
   int tempindex=0;
   for(int i = 1 ; i<6 ; i++)
   {

      if(*(array+tempindex)<= *(array+i))
      {
         tempindex = i;

         
      }


      
   }
   
   printf("Max value: %d\n",*(array+tempindex));

}