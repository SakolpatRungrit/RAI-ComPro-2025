#include<stdio.h>

int main(){
    float hei,base,volume;
    printf("Enter cone height: ");
    scanf("%f",&hei);
    printf("Enter cone base radius: ");
    scanf("%f",&base);
    volume = (3.14*base*base*hei)/3;
    printf("Cone volume: %.1f\n\n",volume);
    if (volume>260){
        printf("This cone is perfect for Supun project\n");
    }else{
        printf("This cone is not fit for Supun project\n");
    }
}