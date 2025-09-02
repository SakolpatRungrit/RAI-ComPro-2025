#include<stdio.h>

int main()
{
    struct Vector
    {
        float y;
        float x;
    };
    struct Vector Cord[2];
    printf("u_x: ");
    scanf("%f",&Cord[0].x);
    getchar();

    printf("u_y: ");
    scanf("%f",&Cord[0].y);
    getchar();

    printf("v_x: ");
    scanf("%f",&Cord[1].x);
    getchar();

    printf("v_y: ");
    scanf("%f",&Cord[1].y);
    getchar();
    
    printf("Resultant Vector is equvalence to %.1fi + %.1fj\n",Cord[0].x+Cord[1].x,Cord[0].y+Cord[1].y);
    return 0;
}