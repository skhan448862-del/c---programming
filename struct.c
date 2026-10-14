# include <stdio.h>


 struct student{
    char name[100];
    int roll;
    float physics;
    float math;
    float chemistry;
    float total;
    float precentage;

};

void input(struct student s[], int n);
void cal(struct student s[], int n);
void display(struct student s[], int n);

int main(){
int N;
printf("enter number of student :");
scanf("%d", &N);

  struct student s[N];

   input(s ,N);
   cal(s , N);
   display(s , N);

   return 0;
}

void input(struct student s[], int n){
    for(int i =0; i < n; i++){
        printf("enter detail of student %d\n", i+1);

        printf("roll number:");
        scanf("%d", &s[i].roll);

        printf("enter name:");
        scanf("%s", s[i].name);

        printf("enter marks of physics :");
        scanf("%f", &s[i].physics);

        printf("enter marks of chemistry :");
        scanf("%f", &s[i].chemistry);

        printf("enter marks of math :");
        scanf("%f", &s[i].math);

    }
}

void cal(struct student s[], int n){
    for(int i = 0; i < n; i++){

        s[i].total = s[i].chemistry + s[i].math + s[i].physics;

        s[i].precentage = s[i].total / 3;
    }
}

void display(struct student s[], int n){
    
    printf("------------------------------------------------------------\n");
    printf("roll\tname\tphysics\tchemistry\tmath\ttotal\tprecentage\n");
    printf("------------------------------------------------------------\n");

    for(int i = 0; i < n; i++){
        printf("%d\t%s\t%.0f\t%.0f\t%.0f\t%.0f\t%.2f\n",
        s[i].roll,
        s[i].name,
        s[i].physics,
        s[i].chemistry,
        s[i].math,
        s[i].total,
        s[i].precentage);
    
    }
}