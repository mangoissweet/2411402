#include <stdio.h>
#define STUDENTNUM 4

struct student{
    int ID;
    int score;
};

int main(void)
{
    int i;
    double sum=0;
    struct student temp={0,0};

    struct student s[STUDENTNUM];
    for(i=0;i<4;i++)
    {
        printf("Input the ID: ");
        scanf("%i",&s[i].ID);
        printf("Input the score: ");
        scanf("%i",&s[i].score);
        sum+=s[i].score;
        if(temp.score<s[i].score)
        {
                temp=s[i];
        }
    }



    printf("The average of the score: %f\nThe highest score - ID: %i, score: %i",sum/4,temp.ID,temp.score);
}
