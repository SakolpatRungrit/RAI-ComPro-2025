#include<stdio.h>
int main(){
    int lo = 1,lop;
    int sc[11],sum;
    char s[11][30],grade[100];
    float GPA[11],sumGPA=0;
    printf("Enter number of subjects (Max 10): ");
    scanf("%d",&lop);
    for(lo; lo<=lop; lo++){
        printf("Enter subject %d:",lo);
        scanf("%s",s[lo]);
        printf("Enter score %d:",lo);
        scanf("%d",&sc[lo]);
        printf("\n");
        sum += sc[lo]+sc[lo+1];
    }
    for(lo=1; lo<=lop; lo++){
        if(sc[lo]>=80){
            grade[lo]='A';
        }else if(sc[lo]<80&&sc[lo]>=70){
            grade[lo]='B';
        }else if(sc[lo]<70&&sc[lo]>=60){
            grade[lo]='C';
        }else if(sc[lo]<60&&sc[lo]>=50){
            grade[lo]='D';
        }else{
            grade[lo]='F';
        }
    }
    
    printf("%-10s  %-10s %-10s %-10s\n","Charlie","Score","Grade","Grade");
    printf("----------------------------------------\n");
    for(lo=1; lo<=lop; lo++){
        GPA[lo] += 69-grade[lo];
        sumGPA += 69-grade[lo];
    }

    for(lo=1; lo<=lop; lo++){
        printf("%-10s %-10d %-10c %-10.1f\n",s[lo],sc[lo],grade[lo],GPA[lo]);





    }
    printf("\nGPA = %.1f\n",sumGPA/lop);

}