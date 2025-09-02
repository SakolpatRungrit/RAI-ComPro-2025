#include<stdio.h>

int main()
{
    struct StudentInfo
    {
        char name[100];
        int age;
        float score;
    };
    struct StudentInfo studentsInfo[3];
    for(int i=0; i<3 ; i++)
    {
        printf("Student %d's name: ",i+1);
        scanf("%[^\n]",studentsInfo[i].name);
        getchar();

        printf("Student %d's age: ",i+1);
        scanf("%d",&studentsInfo[i].age);
        getchar();

        printf("Student %d's Score: ",i+1);
        scanf("%f",&studentsInfo[i].score);
        getchar();
    } 
    int index = 0;
    for(int i=1; i<3 ; i++)
    {
        
        if (studentsInfo[i].score > studentsInfo[index].score){
            index = i;
    
        }
    }
    printf("The hightest scores belongs to %s at %.2f Scores.\n",studentsInfo[index].name,studentsInfo[index].score);
    return 0;
}