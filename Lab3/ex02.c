#include<stdio.h>

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    if(num<=100 && num%2==0){
        printf("%d is even.\n",num);
    }else if(num<=100 && num%2==1){
        printf("%d is odd.\n",num);
    }else{
        printf("%d is out of range.\n",num);

    }




}