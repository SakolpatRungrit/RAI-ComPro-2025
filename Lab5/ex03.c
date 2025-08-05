#include<stdio.h>


int main(){
    int i=0,val[5],max=0,wmax=0,temp;
    while(i<5){
        printf("Enter the Marks of student %d: ",i+1);
        scanf("%d",&val[i]);
        i++;
    }
     while(wmax<5){
        max+=val[wmax];
        wmax++;
    }
    printf("Total Marks: %d\n",max);
    for(i=0;i<=5;i++){
      if (val[i]>val[i+1]){
      temp = val[i+1];
      val[i+1] = val[i];
      val[i] = temp;
    }
}
printf ("The maximum number = %d\n",val[4]);
return 0;



}