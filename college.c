#include <stdio.h>
// write a function to calculate sum , product ad avg of two numbers;



void doWork(int a, int b, int *sum , int *prod, int *avg);
int main(){

    int a = 10, b = 20;
    int sum , prod, avg;
    doWork(a , b, &sum, &prod , &avg);

    printf("sum = %d, prod = %d and avg = %d", sum, prod, avg);
    
    return 0;
}

void doWork(int a, int b, int *sum , int *prod, int *avg){

      *sum = a + b;
      *prod = a * b;
      *avg = (a + b)/2;
}



