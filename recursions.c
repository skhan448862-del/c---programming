// recursive function(this function call itself)

// # include <stdio.h>
// # include <math.h>

//   void  Helloworld( int times);

// int main(){

//     Helloworld(5);
// }

//  void Helloworld( int times){
//     if(times == 0){
//         return;
//     }
//  printf("hello world \n");

//      Helloworld(times-1);
// } 


// recursive function(this function call itself)
// write sum of first n number using recursion


// # include <stdio.h>
// # include <math.h>

// int sum(int n);

// int main(){

//     printf("sum is : %d", sum(10));

// }              


// int sum(int n){

//     if(n==1){
//         return;
//     }

//      int sumNm1 = sum(n-1);
//      int sumN = sumNm1 + n;
// }




 // recursive function(this function call itself)


//  # include <stdio.h>
//  # include <math.h>
//  int fact(int n);

//  int main(){

//     printf("factorial is : % d", fact(5));

//  }

//  int fact(int n){

//     if(n==1){
//         return;
//     }

//     int factNm1 = fact(n - 1);
//     int factNm = factNm1 * n; 
//     return factNm;
//  }




// write function to convert calcius into farnehite

// # include <stdio.h>
// # include <math.h>

// float convert(float calcius);

// int main(){

  

//       float far = convert(12);
//       printf("farnehite temprature is : %f\n", far);
//       return 0;

// }

// float convert(float calcius){
//     float far = calcius * (9.0/5.0) + 32;
//    return far;
// }



// write to calculate precentage of a student of subject math , physics,chemistry

// # include <stdio.h>
// # include <math.h>

//  float calcprecentage(float math, float physics, float chemistry);

//  int main(){
//    float math = 97;
//    float che = 92;
//    float phy = 94;
  
   

//    printf("precentage is : %f", calcprecentage(math, phy, che));
//    return 0;

//  }

// float calcprecentage(float math, float physics, float chemistry){

//     return  ((math + physics + chemistry)/300) * 100;
    
// } 



//  write fibbonacci sequance

# include <stdio.h>
# include <math.h>

int  fib(int n);

int main(){
   
   printf("fib of %d is : %d", fib(6));
   return 0;
}

int fib(int n){

   if(n == 0){
      return 0;

   } if(n == 1){

      return 1;
   }

   int fibNm1 = fib(n -1);
   int fibNm2 = fib(n - 2);
   int fibN = fibNm1 + fibNm2;
   // printf("fib of %d is  : %d \n", fibN);
   return fibN;
}



