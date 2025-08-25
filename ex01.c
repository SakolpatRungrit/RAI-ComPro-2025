#include<stdio.h>

int main(){
    int i,j,rows;
    printf("input you number:");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++)
    {
        printf("\n");
        for(j=1;j<=(rows-i);j++){
            printf(" ");            

        }for(j=rows;j>rows-i;j--){
            printf("%d",j);


        }for(j=rows;j<=rows-i;j--){
            printf("%d",j);

        }for(j=rows-i+2;j<=rows;j++){
            printf("%d",j);
        }




    }
    



}