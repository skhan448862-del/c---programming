// railway ticket booking system...

# include <stdio.h>

typedef struct ticket{
    char name[100];
    int age;
    int pnr;
    float fare;
    int seat_no;
    int status;
}tic;

int main(){
    tic t[20];
    int choice;
    int count = 0;

    for(int i = 0; ; i++){
        printf("=======railway reservation====\n");
        printf("1. book ticket\n");
        printf("2. search ticket\n");
        printf("3. cancel ticket\n");
        printf("4. check available seat\n");
        printf("5. display all ticket\n");
        printf("6. exit\n");

        printf("enter choice : ");
         if(scanf("%d", &choice) != 1){
            printf("invalid choice\n");
            return 1;
         }

        if(choice < 1 || choice > 6){
            printf("invalid choice\n");
            return 1;
        }

        switch(choice){

            case 1 : printf("book ticket\n");

            if(count >= 20){
                printf("All seat booked\n");
                return 1;
            }

            printf("enter passenger name : ");
            scanf(" %99[^\n]", t[count].name);

            printf("enter passenger age : ");
            if(scanf("%d", &t[count].age) != 1){
                printf("invalid input\n");
                return 1;
            } 

            if(t[count].age <= 0){
                printf("invalid age\n");
                return 1;
            }

            t[count].pnr = 1001 + count;
            t[count].seat_no = count + 1;
            t[count].status = 1;

            if(t[count].age < 5){
                t[count].fare = 0;
            } else if(t[count].age > 5 && t[count].age <= 13){
                t[count].fare = 250;
            } else{
                t[count].fare = 500;
            }

            printf("\n=====ticket book successfully======\n");
            printf("passenger name = %s\n", t[count].name);
            printf("passenger age = %d\n", t[count].age);
            printf("PNR number = %d\n", t[count].pnr);
            printf("seat no. = %d\n", t[count].seat_no);
            printf("total fare = %.2f\n", t[count].fare);
            printf("seat status = %d\n", t[count].status);

            count++;

            break;

            case 2 : printf("search ticket\n");

            int search;
            printf("enter PNR number : ");
            scanf("%d", &search);

            int a = 0;

            for(int i = 0; i < count; i++){
                if(search == t[i].pnr){

                    a= 1;
                    printf("\n======details of passenger======\n");
                    printf("\n");
                    printf("passenger name = %s\n", t[i].name);
                    printf("passenger age = %d\n", t[i].age);
                    printf("PNR No. = %d\n", t[i].pnr);
                    printf("seat NO. = %d\n", t[i].seat_no);
                    printf("seat status = %d\n", t[i].status);
                    printf("total fare = %.2f\n", t[i].fare);
                }
            }

            if(a == 0){
                printf("ticket not found\n");
            }
            break;

            case 3 : printf("cancel ticket\n");
            int seat;

            printf("enter seat No. : ");
            if(scanf("%d", &seat) != 1){
                printf("invalid seat number\n");
            }

            int x = 0;

            for(int i = 0; i < count; i++){
                if(seat == t[i].seat_no){
                    x = 1;
                }

                if(seat == t[i].seat_no && t[i].status == 1){
                    t[i].status = 0;
                    printf("seat cancel successfully\n");
                } else if(seat == t[i].seat_no && t[i].status == 0){
                    printf("seat not booked\n");
                }

            }

            if(x == 0){
                    if(seat >= 1 && seat <= 20){
                        printf("seat not booked\n");
                    } else{
                        printf("invalid seat number\n");
                    }
                }

            break;

            case 4 : printf("check available ticket\n");

            int check;
            printf("enter seat number (between 1 to 20): ");
            if(scanf("%d", &check) != 1){
                printf("invalid input\n");
                return 1;
            }

            int found = 0;
            
            for(int i = 0; i < count; i++){
                if(check == t[i].seat_no){
                    found = 1;
                }
                if(t[i].status == 1){
                    printf("seat status = already booked\n");
                } else if(t[i].seat_no = 0){
                    printf("seat status = available\n");
                }

                if(found == 0){
                    if(check >= 1 && check <= 20){
                        printf("seat status = available\n");
                        
                    } else{
                        printf("invalid seat number\n");
                    }
                }
            }

            break;

            case 5 : printf("display all ticket\n");

            for(int i = 0; i < count; i++){
                printf("passenger name = %s\n", t[i].name);
                printf("passenger age = %d\n", t[i].age);
                printf("PNR No. = %d\n", t[i].pnr);
                printf("seat NO. = %d\n", t[i].seat_no);
                printf("seat status = %d\n", t[i].status);
                printf("total fare = %.2f\n", t[i].fare);

                printf("\n");
            }

            break;

            case 6 : printf("Thank you for using railway booking system\n");
            return 0;
            break;

            default : printf("invalid choice\n");
            
        }
    }
}