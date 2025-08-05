#include<stdio.h>


int main(){
    int lo,val[1000]={0},max,maxc=0;
    printf("Enter number of element:");
    scanf("%d",&lo);
    printf("Enter value %d: ",lo);
while(lo--){
    scanf("%d",&maxc);
    if(maxc>max){
        max=maxc;
    }val[maxc]++;
}for(maxc=0;maxc<=max;maxc++){
    if(val[maxc]>0){
        printf("Element %d occurs %d times\n",maxc,val[maxc]);
    }
}
}