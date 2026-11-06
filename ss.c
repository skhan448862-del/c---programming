# include <stdio.h>

typedef  struct student{
    char name[100];
    int roll;
    int marks[3];
}stu;

int main(){
    stu s[50];
    for(int i = 0; i < 5; i++){
        printf("enter  student name : ");
        scanf(" %99[^\n]", s[i].name);

        printf("enter student roll number :");
        scanf("%d", &s[i].roll);

        for(int j =0; j < 3; j++){
            printf("enter %d subjetc marks :", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
        printf("\n");
    }


    FILE *obc;
    obc = fopen("college.txt", "w");

    if(obc == NULL){
        printf("file not found");
    }

    for(int i = 0; i < 5; i++){
        fprintf( obc , "name of  student = %s\n" , s[i].name);
        fprintf(obc, "roll number = %d\n", s[i].roll);
        for(int j = 0; j < 3; j++){
            fprintf(obc, "marks in %d subject = %d\n", j + 1, s[i].marks[j]);
        }

        fprintf(obc, "\n");
    } 

    fclose(obc);  
    
    return 0;

}