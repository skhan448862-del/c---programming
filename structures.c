// structure is a  collection of value of different data types
// it is  user define data types

// syntax

//  store data of 3 students like name , roll number, cgpa , attendence

# include <stdio.h>
# include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

int main(){

    struct student s1;
    s1.roll = 1336;
    s1.cgpa = 9.6;
    // s1.name = "sahil";    we can not asign value of char direct we can copy
    strcpy(s1.name , "sahil");


    printf("name of student : %s\n", s1.name);
    printf("roll number : %d\n", s1.roll);
    printf("cgpa of student is : %f\n", s1.cgpa);
    printf("\n");

    struct student s2;

    s2. roll = 1337;
    s2.cgpa = 10.00;
    strcpy(s2.name, "rohan kumar");

    printf("name of student : %s\n", s2.name);
    printf("roll number : %d\n", s2.roll);
    printf("cgpa of student is : %f\n", s2.cgpa);
    printf("\n");

    struct student s3;

    s3.roll = 1338;
    s3.cgpa = 9.0;
    strcpy(s3.name , "rohan yadav");

    printf("name of student : %s\n", s3.name);
    printf("roll number : %d\n", s3.roll);
    printf("cgpa of student is : %f\n", s3.cgpa);

    return 0;
}