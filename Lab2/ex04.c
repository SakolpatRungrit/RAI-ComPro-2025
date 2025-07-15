#include<stdio.h>

int main(){
    int ID;
    float f1,f2,f3;
    char c1[20],c2[20];
    printf("Enter your Name: ");
    scanf("%s",c1);
    printf("Enter your Student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming Score: ");
    scanf("%f",&f1);
    printf("Enter your Physic score: ");
    scanf("%f",&f2);
      printf("Enter your Calculus Score: ");
    scanf("%f",&f3);

    printf("Hi %s(%d)! Your GPS is %.2f\n",c1,ID,(f1+f2+f3)/3);

    return 0;
}