#include<stdio.h>
int main()
{
    int i,result=0,val;
    for(i=1;i<=10;i++){
        printf("%d.Enter the number: ",i);
        scanf("%d",&val);
        result += val;



    }
    printf("Total sum is %d\n",result);
    printf("Average is %.2f\n",(result*1.0)/10);
    return 0;
}
