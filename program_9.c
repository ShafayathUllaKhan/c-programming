#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(void)
{
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    // s1.name = "shafayath"; gives error because s1 name is array type
    // array of structures
    // initializing structures struct student s1 = {"s",1664,7.9}
    // pointers to structures
    // struct student *ptr = &s1;
    // printf("student roll no = %d\n", (*ptr).roll);
    // printf("student roll no = %d\n", ptr->roll);
    strcpy(s1.name,"shafayath");
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    return 0;
}