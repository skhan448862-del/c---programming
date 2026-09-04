// 1.  write a programme to check the number are odd or even?


// #include <stdio.h>
// #include <conio.h>
// int main(){
/*
even ->1
 odd ->0
 int x;
 printf("enter a number");
 scanf("%d", &x);
 printf("%d", x % 2 == 0);*/

// 2. write a programme 
// if it is sunday & snowing ->true

/*int isSunday = 1;
int isSnowing = 1;
printf("%d", isSunday && isSnowing);*/

// 3. write a programme if a number grater than 9 & less than 100->true
// (2 digit number)
// it is also use to check the number 2 digit or not
/*
int x;
printf("enter a number");
scanf("%d", &x);
printf("%d", (x>9) &&  (x<100));*/


// 4. write a programme to average of 3 numbers

/*int x,y,z;
printf("value of x :");
scanf("%d", &x);
printf("value of y :");
scanf("%d", &y);
printf("value of z :");
scanf("%d", &z);
int average = (x+y+z)/3;
printf(" the average value of these numbers is : %d", average);*/
 
// 5.programme for marks and grade system

/*int marks;
printf("enter marks");
scanf("%d", &marks);
if (marks>=90 && marks<=100){
printf("grade A+");
}
 else if (marks<90 && marks>=80) {
      printf("grade A");
}
   else if (marks>=70 && marks<80){
        printf("grade B");
    }
  else if (marks<70 && marks>=60){
    printf("garde c");
  }
  else if (marks>=40 && marks<60){
    printf("pass");
   }
  else {
    printf("fail");
}*/



// 6. write a programme to check student if marks>=30 ->passed not failed

// int marks;
// printf("enter marks (0-100)");
// scanf("%d", &marks);

// if (marks>=30 && marks<=100){
//     printf("PASS");

// }
// else if (marks>=0 && marks<30){
//     printf("FAIL");
// } else {
//     printf("wrong number");
// }

// in ternary mathod

// marks >= 30 && marks< 100 ? printf("PASS"): printf("better luck next time");


// NESTED based code

// int number;
// printf("enter number");
// scanf("%d", &number);

// if (number>=0){
//     printf("positive \n");
//     if (number % 2 == 0){
//         printf("even \n");
//     } else {
//         printf("odd \n");
//     }
// } else {
//     printf("negative \n");
// }


// 7. write a programme to find if a character is an upper case or not

// char ch;
// printf("enter chracter :");
// scanf("%s", &ch);

// if (ch>='A' && ch<='Z'){
//     printf("upper case latter");
// }
// else if (ch>='a' && ch<='z'){
//     printf("lower case latter");

// } else {
//     printf("not english latter");
// }

// problems on loops
// write number 0 to n by using for and while loop

// int x;
// printf("enter number :");
// scanf("%d", &x);

// for(int i=0; i<=x; i++){
//     printf("%d", i);
// }

// int i=1;
// while(i<=x){
//     printf("%d \n", i);
//     i++;
// }


// write first n natural number 

// for(int i=1; i<=x; i++){
//     printf("%d \n", i);
// }

// int i = x; 
//  while(i>=1){
//     printf("%d \n", i);
//     i--;
//  }


    // printf("%d", n);
// }

//   int sum =0;
// for(int i = 0; i<=x; i++){
//      sum = sum + i;
     
// }

// printf("sum is %d", sum);


//  write table of number given by users

// int a;
// printf("enter a number :");
// scanf("%d", &a);

// for(int i=1;i<=10; i++){
//     printf("%d \n", a*i);
// }

// int x =5;
// while(x<=50){
//   if(x % 2 == 0){
//     continue;
//   }
//   printf("%d \n", x);
//     x++;
// }

//  calculate the sum of all numbers between 5 and 50 (include 5 and 50)

// int sum = 0;
// for(int i = 5; i<=50; i++){
//   sum = sum + i;
// }
//  printf("%d", sum);

// return 0;
    
// }




// # include <stdio.h>

// int main(){

//   int arr[5];
//   printf("enter a number :\n ");

//   int largest, second;
  
//   for(int i=0; i<5; i++){
    
//     scanf("%d", &arr[i]);
 
//   }

//   largest = arr[0];
//   second = arr[0];
//   for(int i=0; i<5; i++){

//     if(arr[i]>largest){

//       second  = largest;
//       largest = arr[i];
//     } else if(arr[i]>largest && arr[i] != largest){

//       second = arr[i];
//     }

    
//   }

//   printf("second largest number is : %d", second);
//   return 0;
// }





//  count odd numbers in array


// # include <stdio.h>
// # include <conio.h>

// int countodd(int arr[], int n);

// int main(){

//   int arr[] = {23, 67, 89, 90, 56, 90};
//    printf("%d", countodd(arr, 6));

//    return 0;

// }

// int countodd(int arr[], int n){
//    int count = 0;

//   for(int i = 0; i<n; i++){

//     if(arr[i] % 2 != 0){

//       count++;
//     }
//   }

//   return count;
// }




//  reverse a arrays

// # include <stdio.h>
// # include <conio.h>

// void reverse(int arr[], int n);
//  void printArr(int arr[], int n);

// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6};

//   reverse(arr, 6);
//   printArr(arr, 6);


//   return 0;
// }

// void printArr(int arr[], int n){

//   for(int i = 0; i<n; i++){
//     printf("%d\t", arr[i]);
//   } 
    
// }

// void reverse(int arr[], int n){

//   int firstval , secondval;
//   for(int i = 0; i<n/2; i++){
//     firstval = arr[i];
//     secondval = arr[n-i-1];

//     arr[i] = secondval;
//     arr[n-i-1] = firstval;
//   }
// }



// write a arrays to store 2 and 3 table
// when we make double arrays then we tell to the compiler that second arrays kitne number ka hai

# include <stdio.h>
void storeTables(int arr[][10], int m, int n, int number);

int main(){
  int tables[2][10];
  storeTables(tables, 10, 0, 5);
  storeTables(tables, 10, 1, 8);


  for(int i = 0; i<10; i++){

    printf("%d\t", tables[0][i]);
  }

  printf("\n");

  for(int i = 0; i<10; i++){

    printf("%d\t", tables[1][i]);
  }

  return 0;
}

void storeTables(int arr[][10], int m, int n, int number ){
  for(int i = 0; i<m; i++){
    arr[n][i] = number * (i + 1);
  }
 
}