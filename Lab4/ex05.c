#include<stdio.h>
int main()
{
    int in,res=1,lo=1;
    printf("Enter a number:");
    scanf("%d",&in);
    
    do{
        res*=lo;
        lo++;

    }while(lo<=in);
    printf("Factorial of %d is %d\n",in,res);
    return 0;

}
