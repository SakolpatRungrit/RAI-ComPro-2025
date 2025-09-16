#include<stdio.h>
#include<math.h>

char primenumber(int value)
{
    for(int i=2;i<value;i++)
    {
        if(value%i==0){return 0;}
    
    }
    return 1;
}
int main(){
    int start,end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d",&start,&end);
    printf("The prime numbers within the intervals are:\n");
    for(int i=start;i<=end;i++)
    {
        if(primenumber(i)==1){printf("%d ",i);}


    }
    printf("\n");
}