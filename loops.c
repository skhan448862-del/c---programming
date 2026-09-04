// for loops
/*  format -> for(intialisation; condition; updation;){
}   */
// condition tell us that when work will stop

// i is the iterator variable or counter variable

//i is any random variable 

#include<stdio.h>
#include<math.h>
int main(){
    // for(int n=1; n<=10; n=n+1){
    // printf("hello world \n");
    // }


    // 1. write the number 0 to 10 by using loops

// increament operator
     // i++(pahle use and then increase)
    // ++i(pahle increase and then use)
// decreament operator
    // i--(pahle use and then decrease)
    // --i(pahle decrease and then use)
// these operators useable when we increase or deacrese by 1

// i=i+1 or i++ are same 
    //  for(int i=0; i<=10; i++){
    //     printf("%d \n", i);
    //  }


// while loop.....

// int i=1;
// while(i<=5){
     
//      printf("hello world \n");
//      i++;
// }

// write a programme to write the number o to n taken by user

// int n;
// printf("enter a number :");
// scanf("%d", &n);

// int i=0;
// while(i<=n){
//     printf("%d \n",i );
//     i++;
// } 


// break statement which is use for exit from loops

// for(int i = 1; i<=5; i++){
//     if (i==4){
//         break;
//     }
//     printf("%d \n", i);

// }

//  problem that keep taking numbers as input from user until user enters an odd number


// int a;
// do{
//     printf("enter a number :");
//     scanf("%d", &a);
//     printf("%d \n", a);
//     if(a % 2 != 0){
//         break;
//     }

// } while(1);

//        printf("thank you very much");

//  taking number by user until entered number is multiply of 7

// int a;
// do{
//     printf("enter a number :");
//     scanf("%d", &a);
//     printf("%d \n", a);

//     if(a % 7 != 0){
//         break;
//     }
    
// } while(1);

//        printf("thank you very much");

//     continue work i loop

// for(int i= 0; i<=10; i++){

//     if(i == 6){ // skip number
//         continue;
//     }
//     printf("%d \n", i);
// }

//  print odd number between 5 to 50

// for(int z = 5; z<=50; z++){
//     if(z % 2 == 0){
//         continue;
//     }
//     printf("%d \n", z);
// }

//   print factorial of the number

// int a;
// printf("enter a number :");
// scanf("%d", &a);

// int fact = 1;
// for(int i=1; i<=a; i++){
//     fact = fact * i;
    
    
// }

//     printf(" the factorial is %d", fact);


//  print reverse table of number n 

int a;
printf("enter a number :");
scanf("%d", &a);

for(int i = 10; i>=1; i--){
    printf("%d \n", a * i);
}

    return 0;
}