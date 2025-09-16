#include<stdio.h>

int sumofodd(int countval,int *value)
{
    int sumation=0;
    for(int i=0;i<countval;i++)
    {
        if(value[i]%2==1){sumation+=value[i];}
    }return sumation;
}
int sumofeven(int countval,int *value)
{
    int sumation=0;
    for(int i=0;i<countval;i++)
    {
        if(value[i]%2==0){sumation+=value[i];}
    }return sumation;

}
int main(){
    int N,number[1000];
    printf("N: ");
    scanf("%d",&N);
    for(int i=0; i<N;i++)
    {
        printf("Input: ");
        scanf("%d",&number[i]);
    }
    printf("output: Sum of even number: %d\n        Sum of odd number: %d\n",sumofeven(N,number),sumofodd(N,number));

}