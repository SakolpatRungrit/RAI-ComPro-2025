#include<stdio.h>

char vowelcheck(char *string)
{
    char vow[11]={'a','e','i','o','u','A','E','I','O','U'};
    int i = 0,temp = 0;
    while(1){
        if (string[i] == '\0'){break;}
        for(int j=0;j<10;j++)
        {
            if(string[i] == vow[j]){temp++;}
        }
        i++;
    }
    return temp;
}
int main(){
    char character[100];
    printf("Input: ");
    scanf("%[^\n]",character);
    printf("Output: Number of vowels: = %d\n",vowelcheck(character));
}