// function decleration/prototyrpe
// #include <stdio.h>
// void printHello();
// void printgoodbye();
// void namste();
// void bonjour();

// int main(){
    
//     char ch;
//     printf("enter i for indian and f for franch :");
//     scanf("%c", &ch);
//    if(ch=='i') {
//    namste();
//    } else if( ch == 'f'){
//     bonjour();
//    } else {
//     printf("bye");
//    }
   
    // printHello();//call function
    // printgoodbye();
    // return 0;
// }


//  function defination
//  void printHello(){
    // printf("hello! \n");
//  }

//   void printgoodbye() {
    // printf("good bye");
//   }
//    void namste(){
//     printf("namste \n");
//    }
//  void bonjour(){
//     printf("bonjour \n");
//  }









// # include <stdio.h>
//  int sum(int a, int b);

//  int main(){
//     int a,b;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter second number : ");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("sum is : %d\n" , s);
//     return 0;
//  }

//   int sum(int p, int q){
//      return  p + q;
    
//   }





// write table of number given by user

// # include <stdio.h>
// void printTable( int n);

// int main(){
//     int n;
//     printf("enter numbe : ");
//     scanf("%d", &n);
    
// printTable(n);//n is argument/actual parameter
// return 0;
// }

//  void printTable(int n){ // parameter/formal parameter
//     for(int i=1; i<=10; i++){
//     printf("%d \n", i*n);
//     }
//  }



// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter a number : ");
//     scanf("%d", &a);
     
//     int x = 1;
//     for(int i = 1; i<=a; i++){
        
//      x = x * i;
       
//     }
//      printf("final factorial is : %d", x );

// }


// # include <stdio.h>
// void calculateprice(float value);

// int main(){
//    float value;
//    printf("enter price : ");
//    scanf("%f", &value);

//     calculateprice(value);
//     printf("value is : %f", value);

// }

// void calculateprice(float value){

//     value = value + (0.18 * value);
//    printf(" final price is : %f \n", value);

// }.



// write power of number given by user

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int a; 
//     printf("enter number :");
//     scanf("%d", &a);

//     printf(" square is : %f \n", pow( a,2));

//     return 0;
// }



// write a function to calculate the area of sqare , circle and rectangle



# include <stdio.h>
# include <math.h>

float areasquare(float side);
float areacircle(float radius);
float arearectangle(float a,float b);
int main(){

    float side ;
    printf("enter side of sqaure : ");
    scanf("%f", &side);

    printf("area of square : %f \n", areasquare(side));

    float radius;
    printf("enter radius : ");
    scanf("%f" , &radius);

    printf("area of circle : %f \n", areacircle(radius));


     float length, breadth;
     printf("enter length : ");
     scanf("%f", &length);
     printf("enter breadth : ");
     scanf("%f", &breadth);

     printf("area of rectangle : %f \n", arearectangle(length,breadth));


}

float areasquare(float side){
    return side * side ;
}

float areacircle(float radius){

    return 3.14 * radius * radius;
}

float arearectangle(float a,float b){

       return a * b;

}