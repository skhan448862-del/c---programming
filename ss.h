# include <stdio.h>
typedef  struct student{
    char name[100];
    int roll;
    int marks[3];
}stu;

int main(){
    stu s[50];
    for(int i = 0; i < 5; i++){
        printf("enter %d student name : ", i + 1);
        scanf("%99s", s[i].name);

        printf("enter %d student roll number :", i + 1);
        scanf("%d", &s[i].roll);

        printf("enter %d subjetc marks :", i + 1);
        for(int j =0; j < 3; j++){
            scanf("%d", &s[i].marks[j]);
        }
    }

    printf("marks in 3 subject of 2 student = %d", s[2].marks[3]);


    // FILE *obc;
    // obc = fopen("college.txt", "w");

    // for(int i = 0; i < 5; i++){
    //     fprintf("name of  student = %s\n" , s[i].name);
    //     fprintf("roll number = %d\n", s[i].roll);
        
}