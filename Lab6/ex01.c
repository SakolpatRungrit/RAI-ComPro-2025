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
    for(int i=0; i<3 ; i++)
    {
        printf("Student %d name is \"%s\",age %d\nD",i+1,studentsInfo[i].name,studentsInfo[i].age);
    }   
    return 0;
}