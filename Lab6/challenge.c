#include <stdio.h>

int main()
{
    float avg[3]={0,0,0},avgsubmath=0,avgsubeng=0,avgsubsci=0,avgsubhistory=0;
      int indexsub = 0,index = 0;
    struct Information
    {
        char name[100];
        int ID;
        float math, eng, sci, history;
    };
    struct Information user[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and 4 grades for sudent %d\n", i + 1);
        scanf("%s %d %f %f %f %f", user[i].name,&user[i].ID, &user[i].math,&user[i].eng,&user[i].sci,&user[i].history);
        printf("\n");
    }
    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++)
    {
       
        avg[i] = (user[i].math + user[i].eng + user[i].sci + user[i].history) / 4;
        printf("%s (%d): %.2f\n", user[i].name, user[i].ID, avg[i]);
    }
    printf("\n");

    for(int i=1; i<3 ; i++)
    {
        if (avg[0] < avg[i]){
            index = i;
        }
    }
    
        avgsubmath = (user[0].math + user[1].math + user[2].math)/3;
        avgsubeng = (user[0].eng + user[1].eng + user[2].eng)/3;
        avgsubsci = (user[0].sci + user[1].sci + user[2].sci)/3;
        avgsubhistory = (user[0].history + user[1].history + user[2].history)/3;
    printf("Top Student:%s with %.2f\n",user[index].name,avg[index]);
    printf("Math: %.2f\n",avgsubmath);
    printf("English: %.2f\n",avgsubeng);
    printf("Science: %.2f\n",avgsubsci);
    printf("History: %.2f\n",avgsubhistory);
    printf("\n");
    float avgsuball[4]={avgsubmath,avgsubeng,avgsubsci,avgsubhistory};
    for(int i=1; i<4 ; i++)
    {
        
        if (avgsuball[indexsub] < avgsuball[i]){
            indexsub = i;
        }
    };
    if(indexsub == 0)
    {
        printf("Top Subject: Math with average %.2f\n",avgsuball[0]);

    }else if(indexsub == 1)
    {
        printf("Top Subject: English with average %.2f\n",avgsuball[1]);

    }else if(indexsub == 2)
    {
        printf("Top Subject: Science with average %.2f\n",avgsuball[2]);

    }else if (indexsub==3)
    {
        printf("Top Subject: History with average %.2f\n",avgsuball[3]);
    }
    return 0;
}