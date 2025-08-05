#include<stdio.h>


int main(){
    int i,val[8],max=0,min=99999999;
    while(i<8){
        printf("Enter value %d: ",i+1);
        scanf("%d",&val[i]);
        i++;
    }
for(i=0;i<8;i++){
    if(val[i]>max){
        max=val[i];
    } if(val[i]<min){
        min=val[i];
    }
}
printf("Largest number: %d\n",max);
printf("Smallest number: %d\n",min);
}