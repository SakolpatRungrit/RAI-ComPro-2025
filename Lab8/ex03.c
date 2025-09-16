#include<stdio.h>
#include<math.h>

char sumation(int valueA,int valueB)
{
    return (valueA*valueA)+(valueB*valueB);
}
int main(){
    int valA,valB;
    printf("Enter the two integers: ");
    scanf("%d %d",&valA,&valB);
    printf("Sum of squares of %d and %d is %d\n",valA,valB,sumation(valA,valB));
}