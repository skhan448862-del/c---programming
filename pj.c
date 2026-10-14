// calculate age 

# include <stdio.h>

int main(){
    int current_year;
    int current_month;
    int current_day;

    printf("enter present date (year month day)");
    scanf("%d %d %d", &current_year, &current_month, &current_day);

    int year , age ,month, day;
    
    printf("enter you birth (year month day):");
    scanf("%d %d %d", &year, &month, &day);
    
    int previous_day;
    printf("enter number of previous month days : ");
    scanf("%d", &previous_day);
    

    if(current_year > year){
        age = current_year - year;

        if(current_month > month){
            month = current_month - month - 1;
            
            if(current_day >= day){
                day = current_day - day;

            } else {

                day = (current_day + previous_day) - day;  
            }

        } else if(current_month < month){

            month = month - current_month -1;
        }

        
    }
    
   
    printf("your age is : %d year\n ", age);
    printf("your month is  : %d month\n ", month);
    printf("your day is : %d day\n ", day);
    return 0;
}