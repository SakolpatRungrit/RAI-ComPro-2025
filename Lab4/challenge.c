#include<stdio.h>
int main()
{
    int in,dep,with,total=0;
    do{
        printf("====== ATM MENU ======\n");
        printf("1. Check Blancen\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Chose an Option: ");
        scanf("%d",&in);
        if(in == 1){
            printf("Current Balance: %.2f\n",total*1.0);
        }else if(in == 2){
            printf("Enter amout to deposit: ");
            scanf("%d",&dep);
            total += dep;
        }else if(in == 3){
            printf("Enter amout to withdraw: ");
            scanf("%d",&with);
            total -= with;
        }else if(in == 4){
            printf("Thank you for using the ATM\n");
        }else{
            printf("Error no option\n");
        }
    }while(in != 4);
    return 0;
}
