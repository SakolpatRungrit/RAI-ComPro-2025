#include<stdio.h>
int main()
{
    int in,count=1;
    printf("Enter a number:");
    scanf("%d",&in);
    printf("\nMultiplication Table for %d:\n",in);
    do{
        printf("%d x %d = %d\n",in,count,in*count);
        count++;


    }while(count<=12);
    return 0;

}
