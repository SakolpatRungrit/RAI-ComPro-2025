#include<stdio.h>

int main(){
    float rad,leng,area,resist,tresit;
    printf("Enter Radius of Resistor (m): ");
    scanf("%f",&rad);
    printf("Enter Length of Resistor (m): ");
    scanf("%f",&leng);
    printf("Enter Resistivity of Resistor: ");
    scanf("%f",&resist);
    area = 3.14*(rad*rad);
    tresit = (resist*leng)/area;
    printf("The value off this resistor = %.2f Ohm\n",tresit);








}