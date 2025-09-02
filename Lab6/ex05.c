#include<stdio.h>

int main()
{
    struct Time
    {
        int min;
        int sec;
    };
    struct Time timein[3];
    for(int i=0; i<3 ; i++)
    {
        printf("Time input(m:s): ");
        scanf("%d:%d",&timein[i].min,&timein[i].sec);

    }   
    printf("Total time elasped: %d second(s)\n",timein[0].min*60+timein[0].sec+timein[1].min*60+timein[1].sec+timein[2].min*60+timein[2].sec);
    return 0;
}