#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int age;
    int rollno;
};

int main(){
     struct student s1;
     strcpy(s1.name,"Vanshika");
     s1.age=19;
     s1.rollno=361;
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.rollno);
}