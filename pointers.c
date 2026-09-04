// (*) it means value at address
//  (&) it means address of variable
# include <stdio.h>
# include <math.h>

int main(){

    int marks = 90;
    int *ptr = &marks;
    int _marks = *ptr;
    printf("%d", _marks);
    printf(" the address of marks is :%p \n", &marks);
    printf("the address of marks is : %p \n", ptr);
    printf("the address of ptr is : %p \n", &ptr);

    // address convert into int sign
    // use %u ,,,%p ki jagah
    // %p for pointer variable
    

    printf("%u \n", &marks);

    printf("%d \n", marks);
    printf("%d \n", *ptr);
    printf("%d \n", *(&marks));
    return 0;
}



// find out put

# include <stdio.h>
# include <math.h>

int main(){

    int x;
    int *ptr;

    ptr = &x;

     *ptr = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

     if(*ptr +=5){
     printf("x = %d\n", x);
     printf("*ptr = %d\n", *ptr);
     }
    return 0;
}


# include <stdio.h>
# include <math.h>


void swap(int *r ,int *s);

int main(){
    
    int a = 10;
    int b = 20;
    
     printf("before swap :  a = %d\n and b = %d\n", a, b);

    swap(&a, &b);
     printf("after swap : a = %d\n and b = %d\n" ,a,b );
    
    
    return 0;

}

void swap(int *r, int *s){
    int temp;
    temp = *r;
    *r = *s;
    *s = temp;
    
}


//  pointer to pointer **pptr use for pointer to pointer 

# include <stdio.h>
# include <math.h>

int main(){

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
      
   printf("the value of i is : %d", **pptr);
   return 0;

}


//  pointer to functions




//  call by value
// void square(int n){

//     n = n * n;
//     printf("square = %d\n", n);



// }

// call by refrence

// void _square(int *n){
   
//       *n = (*n) * (*n);
//       printf("square = %d\n", *n);
// }


// swap two numbers

# include <stdio.h>

void swap(int *a, int *b);

int main(){

    int x = 10, y = 20;

    printf("before swap x = %d and y = %d\n", x, y);

    swap(&x, &y);

    printf("after swap x = %d and y = %d\n", x, y);
    return 0;


}
// call by refrence
//  call by value can't change because call by value  copy numbers not change
// but call by refrence change value at address so we change variable value by address


void swap(int *a, int *b){


    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}