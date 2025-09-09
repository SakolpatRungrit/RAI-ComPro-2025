#include<stdio.h>

int main(){
   int num[5];
   int temp=0;
    printf("Enter 5 integer: ");
    for(int i=0 ; i<5 ;i++)
    {
        scanf("%d",num+i);
    }
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < (5 - k - 1); k++)
        {
            if (*(num+k) > *(num+(k+1)))
            {
                temp = *(num+k);
                *(num+k) = *(num+k+1);
                *(num+k + 1)= temp;
            }
        }
    }
    printf("Sorted:");
    for(int re=0; re < 5; re++)
    {
        printf("%d ",*(num+re));
    }
    printf("\n");
}