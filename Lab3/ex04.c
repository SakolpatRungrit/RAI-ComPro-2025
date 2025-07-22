#include<stdio.h>

int main(){
    float Cal,Phys,Sci,total;
    char name[50];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculus score: ");
    scanf("%f",&Cal);
    printf("Enter your Physic score: ");
    scanf("%f",&Phys);
    printf("Enter your Science score: ");
    scanf("%f",&Sci);
    total = (Cal+Phys+Sci)/3;
    if(total >= 80){
        printf("%s, your average is %.2f. You got A.\n",name,total);

    }else if(70 <= total&& total < 80){
         printf("%s, your average is %.2f. You got B.\n",name,total);




    }else if(60 <= total&& total < 70){
         printf("%s, your average is %.2f. You got C.\n",name,total);
    
    
    }else if(50 <= total&& total < 60){
         printf("%s, your average is %.2f. You got D.\n",name,total);
    
    
    
    }else{
         printf("%s, your average is %.2f. You got F.\n",name,total);  




    }

}