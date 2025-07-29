#include<stdio.h>
int main()
{
    int in;
    do{
        printf("Enter the number:");
        scanf("%d",&in);
        if(in == 0){
            printf("Exiting Program... Bye\n");
        }else if(in%2==1){
            printf("%d is odd\n",in);
        }else if(in%2==0){
            printf("%d is even\n",in);
            
        }

    }while(in != 0);
    return 0;

}
