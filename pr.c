# include <stdio.h>
void caldata(int arr[]);
// void display(stu s1);

 typedef struct student{
    char name[100];
    int rollNo;
    int marks[3];
 }stu;

 void display(stu s1, int arr[]);

int main(){
   stu s1;
   printf("enter  student name :");
   scanf("%s", s1.name);
   printf("enter  student roll number :");
   scanf("%d", &s1.rollNo);

   for(int i = 0; i < 3; i++){
      printf("enter marks in subject %d :", i +1);
      scanf("%d", &s1.marks[i]);
   }

   FILE *fp;
   fp = fopen("student.txt", "w");

   fprintf(fp, "name = %s\nroll number = %d\n ", s1.name, s1.rollNo);

   for(int i = 0; i < 3; i++){
      fprintf(fp, "marks in subject %d = %d\n", i + 1, s1.marks[i]);
   }

   fclose(fp);

   caldata(s1.marks);
   printf("\n");

   display(s1, s1.marks);

   fp = fopen("student.txt", "r");
   
   if(fp == NULL){
      printf("file not found");
   }
   char line[200];

   while(fgets(line , sizeof(line), fp) != NULL){
      printf("%s", line);
   }

   fclose(fp);

    return 0;   
} 

void caldata(int  arr[]){
   int total = 0;
   float percentage;

   for(int i = 0; i < 3; i++){
      total = total + arr[i];
   }

   percentage = total / 3.0;

   FILE *fp;
   fp = fopen("student.txt", "a");
   fprintf(fp, "total marks = %d\n percentage = %.2f\n", total, percentage);

   fclose(fp);

}

void display(stu s1, int arr[]){
   printf("student name = %s\n", s1.name);
   printf("roll number = %d\n", s1.rollNo);

   for(int i = 0; i < 3; i++){
      printf("marks in subjetc %d = %d\n", i +1, s1.marks[i]);
   }
   int total = 0;
   float percentage;
   for(int i = 0; i < 3; i++){
      total+=arr[i];
   }
   percentage = total/3.0;

   printf("total marks of student = %d\n", total);
   printf("percentage = %.2f\n", percentage);
}