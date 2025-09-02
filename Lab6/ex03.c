#include<stdio.h>
#include<math.h>

int main()
{
    struct Cordinate
    {
        float y;
        float x;
    };
    struct Cordinate Vector[2];
    for(int i=0; i<2 ; i++)
    {
        printf("x%d: ",i+1);
        scanf("%f",&Vector[i].x);
        getchar();

        printf("y%d: ",i+1);
        scanf("%f",&Vector[i].y);
        getchar();
    }
    double distance,total;
    distance = ((Vector[1].x-Vector[0].x)*(Vector[1].x-Vector[0].x))+((Vector[1].y-Vector[0].y)*(Vector[1].y-Vector[0].y));
    total = sqrt(distance);
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3lf unit(s)\n",Vector[0].x,Vector[0].y,Vector[1].x,Vector[1].y,total);
    return 0;
}