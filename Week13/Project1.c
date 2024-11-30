#include <stdio.h>

struct student{
 
   int ID;
    char name[100];
    double grade;
};

int main(void){
    struct student s={24,"Eunju",4.2};
    printf("ID : %i\n",s.ID);
    printf("name : %s\n",s.name);
    printf("grade : %f\n",s.grade);
}
