#include<stdio.h>
#include<stdlib.h>
struct employee{
    int age;
    float salary;
    char name[10];
    };
    int main(){
        struct employee e1,e2;
        printf("Enter the age salary and name of the e1    :");
        scanf("%d %f %s",&e1.age, &e1.salary, e1.name);
        printf("Enter the age salary and name of the e2    :");
        scanf("%d %f %s",&e2.age, &e2.salary, e2.name);
        printf("The age, salary and name of e1 employee is %d %f %s\n" ,e1.age,e1.salary,e1.name);
        printf("The age, salary and name of e2 employee is %d %f %s\n" ,e2.age,e2.salary,e2.name);
        return 0;
    }