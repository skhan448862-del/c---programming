//  hospital mangement system.....

# include <stdio.h>

typedef struct patient{
    int patient_ID;
    char patient_name[100];
    int patient_age;
    float treatment_fees;
    float medicine_fees;
    
}pati;

void input(pati p[], int x);
void display(pati p[], int n);

int main(){
    int n;
    printf("enter number of patient : ");
    scanf("%d", &n);
    printf("\n");
    pati p[50];

    input(p, n);
    display(p, n);

    int search;

    printf("enter patient ID : ");
    scanf("%d", &search);
    printf("\n");


    for(int i = 0; i < n; i++){

        if(search == p[i].patient_ID){
            printf("patient name = %s\n", p[i].patient_name);
            printf("patient ID = %d\n", p[i].patient_ID);
            printf("patient age = %d\n", p[i].patient_age);
            printf("treatment fees = %.2f\n", p[i].treatment_fees);
            printf("medicine fees = %.2f\n", p[i].medicine_fees);

            printf("\n");

            printf("total fees = %.2f\n", p[i].medicine_fees + p[i].treatment_fees);
        }
    }

    FILE *fp;

    fp = fopen("hospital.txt", "w");
    for(int i = 0; i < n; i++){
        fprintf(fp, "patient name = %s\n", p[i].patient_name);
        fprintf(fp, "patient ID = %d\n", p[i].patient_ID);
        fprintf(fp, "patient age = %d\n", p[i].patient_age);
        fprintf(fp, "treatment fees = %.2f\n", p[i].treatment_fees);
        fprintf(fp, "medicine fees = %.2f\n", p[i].medicine_fees);
        fprintf(fp, "total fees = %.2f\n", p[i].medicine_fees + p[i].treatment_fees);

        fprintf(fp, "\n");
    }

    fclose(fp);



    return 0;
}

void input(pati p[], int x){
    for(int i = 0; i < x; i++){
        printf("entee patient name : ");
        scanf(" %99[^\n]", p[i].patient_name);

        printf("enter patient ID : ");
        scanf("%d", &p[i].patient_ID);

        printf("enter patient age : ");
        scanf("%d" , &p[i].patient_age);

        printf("enter treatment fees : ");
        scanf("%f", &p[i].treatment_fees);

        printf("enter medicine fees : ");
        scanf("%f", &p[i].medicine_fees);

        printf("\n");

    }
}

void display(pati p[], int n){
    for(int i = 0; i < n; i++){
        printf("patient name = %s\n", p[i].patient_name);
        printf("patient ID = %d\n", p[i].patient_ID);
        printf("patient age = %d\n", p[i].patient_age);
        printf("treatment fees = %.2f\n", p[i].treatment_fees);
        printf("medicine fees = %.2f\n", p[i].medicine_fees);

        printf("\n");
    }
}pj