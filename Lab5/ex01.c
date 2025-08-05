#include<stdio.h>


int main(){
    int i=0,val[10],o;
    while(i<10){
        printf("Enter the value %d here:",i+1);
        scanf("%d",&val[i]);
        i++;
    }
printf("Values in array are: ");
    for(i=0;i<10;i++){
       printf("%d",val[i]);
       if(i!=9){
            printf(",");
       }else{
        printf("\n");
       }
    }
}