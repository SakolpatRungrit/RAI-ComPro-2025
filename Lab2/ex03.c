#include<stdio.h>

int main(){
    int i1;
    float f1,f2;
    char c1[20],c2[20],c3[20];
    printf("Enter your Name: ");
    scanf("%s",c2);
    printf("Enter your Age: ");
    scanf("%d",&i1);
    printf("Enter your height: ");
    scanf("%f",&f1);
    printf("Enter your weight: ");
    scanf("%f",&f2);
    printf("Enter your gender: ");
    scanf("%s",c1);
    printf("Enter your Educational Qualification: ");
    scanf("%s",c3);

    printf("\nName: %s     Age: %d    Gender: %s\n",c2,i1,c1);
    printf("Height: %.1f  Weight: %.0f\n",f1,f2);
    printf("Educational: %s \n",c3);





}