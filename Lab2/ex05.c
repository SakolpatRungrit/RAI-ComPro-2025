#include<stdio.h>

int main(){
    int Age;
    float Hei;
    char c1[50],c2[20];
    printf("Enter your full name: ");
    scanf("%[^\n]",c1);
    printf("Enter your Age: ");
    scanf("%d",&Age);
    printf("Enter your Height: ");
    scanf("%f",&Hei);
    printf("Enter your University name: ");
    scanf("%s",c2);

    printf("Hi! Everyone. This is %c.%c%c%c%c from %s. ",c1[5],c1[0],c1[1],c1[2],c1[3],c2);
    printf("I am %d years old and my height is %.1f cm tall.\n",Age,Hei);

    return 0;
}