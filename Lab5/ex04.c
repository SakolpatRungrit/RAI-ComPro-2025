#include<stdio.h>


int main(){
    int i=0,val[10],even=0,odd=0;
    while(i<10){
        printf("Enter value %d: ",i+1);
        scanf("%d",&val[i]);
        i++;
    }
for(i=0;i<10;i++){
    if(val[i]%2==0){
        even++;
    }else{
        odd++;
    }
}
printf("Even number: %d\n",even);
printf("Odd number: %d\n",odd);
}