#include<stdio.h>

int main(){
    float avg,n1,n2,n3,Max,Min;

    printf("Enter interger #1: ");
    scanf("%f",&n1);
    printf("Enter interger #2: ");
    scanf("%f",&n2);
    printf("Enter interger #3: ");
    scanf("%f",&n3);
    if (n1 < n2 && n1 < n3){
        Max = n1;
    }else if (n2 < n1 && n2 < n3){
        Max = n2;
    }else{
        Max = n3;;
    }
    if (n1 < n2 && n1 < n3){
        Min = n1;
    }else if (n2 > n1 && n2 > n3){
        Min = n2;
    }else{
        Min = n3;;
    }
    avg = (n1+n2+n3)/3;
    printf("Result:\n");
    printf("Minimum: %.0f\n",Min);
    printf("Maximum: %.0f\n",Max);
    printf("Sum: %.0f\n",n1+n2+n3);
    printf("Average: %.2f\n",avg);
    return 0;
}