#include<stdio.h>
#define pi 3.14
float circumference(float radius)
{
   return 2*pi*radius;
}
float areacirle(float radius)
{
return pi*radius*radius;
}
int main(){
    float rad;
    printf("Enter the radius in cm: ");
    scanf("%f",&rad);

    printf("Circumference: %.2f\n",circumference(rad));
    printf("Area: %.2f\n",areacirle(rad));
    return 0;

}