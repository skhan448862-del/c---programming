//  book library mangement system ....

# include <stdio.h>


typedef struct book{
    char title[100];
    int bookID;
    float price;
    int issued;
}book;

int main(){
    book B[50];

    for(int i = 0; i < 5; i++){
        printf("enter book title : ");
        scanf(" %99[^\n]", B[i].title);

        printf("enter book ID : ");
        scanf("%d", &B[i].bookID);

        printf("enter price of book : ");
        scanf("%f", &B[i].price);

        printf("is book issued ? (1 = yes or 0 = no) : ");
        scanf("%d", &B[i].issued);

        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        printf("book title = %s\n", B[i].title);
        printf("book ID = %d\n", B[i].bookID);
        printf("book price = $%.2f\n", B[i].price);
        
       if(B[i].issued == 1){
        printf("status = issued\n");
       } else{
        printf("status = available\n");
       }
       printf("\n");
    
    }
    int choice;
    printf("1. issue book\n");
    printf("2. return book\n");
    printf("enter your choice : ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("your choice = issue book\n");
    } else if(choice == 2){
        printf("your choice = return book\n");
    } else{
        printf("invalid choice\n");
        return 1;
    }

    int search;
    printf("enter book id : ");
    scanf("%d", &search);
    printf("\n");
    int i;
  
    
    for( i = 0; i < 5; i++){
        if(search == B[i].bookID){
            printf("book ID = %d\n", B[i].bookID);
            printf("book title = %s\n", B[i].title);
            printf("book price = %.2f\n", B[i].price);

            if(choice == 1 &&  B[i].issued == 1){
                printf("book is already issued\n");

            } else if(choice == 1 && B[i].issued == 0){
                B[i].issued = 1;
                printf("book issued successfully\n");

            }else if(choice == 2 && B[i].issued == 1){
                B[i].issued = 0;
                printf("book return successfully\n");

            } else if(choice == 2 && B[i].issued == 0){
                printf("book is already available in libaray\n");
            }

          break;
        
        }

    }

    if(i == 5){
        printf("book not found");
    }

    FILE *fp;


    fp = fopen("book.txt", "w");

    if(fp == NULL){
        printf("file not found\n");
    }
     
    fprintf(fp, "book title\t book ID\t book price\t book status(1 == issued and 0 = available)\n");
    fprintf(fp, "----------------------------------------------------------------------------------\n");
    for(int j = 0; j < 5; j++){
        fprintf(fp, "%s\t\t %d\t\t %.2f \t\t %d\n", B[j].title, B[j].bookID, B[j].price, B[j].issued);
        fprintf(fp, "-------------------------------------------------------------------------------\n");
    }
    

    return 0 ;
}