//  bank mangement system......

# include <stdio.h>

typedef struct account{
    char name[100];
    int accNo;
    float balance;
}acc;

int main(){
    acc a[5];
    for(int i = 0; i < 5; i++){
        printf("enter accout holder name : ");
        scanf(" %99[^\n]", a[i].name);

        printf("enter account number : ");
        scanf("%d", &a[i].accNo);

        printf("enter bank balance : ");
        scanf("%f", &a[i].balance);

        printf("\n");
    }

    FILE *bank;
    bank = fopen("bank.txt", "w");


    for(int i = 0; i < 5; i++){
        fprintf(bank, "name = %s\n", a[i].name);
        fprintf(bank , "account number = %d\n", a[i].accNo);
        fprintf(bank, "balance = %.2f\n", a[i].balance);

        fprintf(bank , "\n");
    }

    fclose(bank);

    int search;
    int i;

    printf("enter account number to search : ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++){
        if(search == a[i].accNo){
            printf("account number = %d\n", a[i].accNo);
            printf("accout holder name = %s\n", a[i].name);
            printf("balance = %.2f\n", a[i].balance);

            printf("\n");

            break;
        }
    }
    if(i == 5){
        printf("user not found");
        return 0;
    }

    // printf("account balance = %.2f\n" , a[i].balance);

    int choice;

    printf(" 1.deposite money\n");
    printf("2. withdraw money\n");
    printf("3. check balance\n");

    printf("enter choice : ");
    scanf("%d", &choice);

    if(choice == 1){
        float amount;
        printf("enter deposite amount : ");
        scanf("%f", &amount);

        if(amount > 0){
            a[i].balance+=amount;
         printf(" new account balance = %.2f\n" , a[i].balance);
        } else {
            printf("invalid amount");
        }

    } else if(choice == 2){
        float amount;
        printf("enter withdraw amount : ");
        scanf("%f", &amount);

        if(amount > a[i].balance){
            printf("insufficiant amount");

        } else if(amount <= a[i].balance){
             a[i].balance-=amount;
             printf("new account balance = %.2f\n" , a[i].balance);

        }else if(amount < 0){
            printf("invalid amount");
        }

    } else if(choice == 3){

        printf("balance = %.2f\n", a[i].balance);

    }else{
        printf("invalid choice");
    }

    bank = fopen("bank.txt", "w");

    fprintf(bank , "name\t account number\t balance\n");
    fprintf(bank , "-----------------------------------------------------\n");

    for(int i = 0; i < 5; i++){
        // fprintf(bank , "name\taccount number\tbalance\n");
        fprintf(bank , "%s\t\t%d\t\t\t%.2f\n", a[i].name, a[i].accNo, a[i].balance);
        fprintf(bank , "-----------------------------------------------------\n");
    }

    fclose(bank);


    return 0;
}   