#include<stdio.h>
int main()
{
    int i=1,result=0,val;
    while(i <= 10){
        printf("%d.Enter the number: ",i);
        scanf("%d",&val);
        result += val;
        i++;



    }
    printf("Total sum is %d\n",result);
    return 0;
}
