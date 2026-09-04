// relational operators 
// here 0 means false and 1 means true
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
    
    printf("%d \n", 45 > 43);
    printf("%d \n", 23<24);
printf("%d \n", 23<=24);
printf("%d \n", 23>=24);
printf("%d \n", 23==24);
    printf("%d \n", 23!=24);







    // logical operators

    // && means AND operators
    // || means OR operators
    // ! means NOT operators
    
//     printf("%d \n", 45>44 && 23<22);
// printf("%d \n", 45>44 || 23<22);
// printf("%d \n", !(45>44) ||(23<22));
// printf("%d \n", !(13>24));
// printf("%d \n", !(45>43)&&(23<20));

// conditional operators
// if-else are conditional operators
// if is mandatory but else is optional

// int age;
// printf("enter age:");
// scanf("%d", &age);

// if(age >= 18){
//     printf("adult \n");

// }
// else if(age > 13 && age < 18) {

//     printf("teenager \n");
// }
// else {
//     printf("child \n");
// }
// printf("thank you");


// ternary operator

//age >=18 ? printf("adult") : printf("not adult");

// switch operator
// it is chack the value of constants and  give output

int day;
printf("enter a day (1-7)");
scanf("%d", &day);

switch (day)  {
    case 1: printf("monday");
              break;

    case 2: printf("tuesday");
              break;

    case 3: printf("wednesday");
              break;

    case 4: printf("thrusday");
              break;
              
     case 5: printf("friday");
              break;

     case 6: printf("saturday");
              break;         

     case 7: printf("sunday");
              break;    
              
         default: printf("not a valid day");      
}
// if ke andar if statement ho tab (NESTED) hota hai




    return 0;
}