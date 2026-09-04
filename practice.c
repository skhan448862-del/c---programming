// reverse array

# include <stdio.h>
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

int main(){
   // int arr[] = {1, 2, 3, 4, 5};

   // reverse(arr, 5);
   // printArr(arr, 5);



   int n;
   printf("enter n (n>2)");
   scanf("%d", &n);
    

   int fib[n];
   fib[0]= 0;
   fib[1] = 1;

   printf("%d \t%d\t", fib[0], fib[1]);

   for(int i=2; i<n; i++){

      fib[i]= fib[i-1] + fib[i-2];
      printf("%d\t", fib[i]);
   }

   return 0; 


}

// void printArr(int arr[], int n){

//    for(int i = 0; i<n; i++){

//       printf("%d\t", arr[i]);
//    }
// }

// void reverse(int arr[], int n){

//    for(int i = 0; i<n/2; i++){

//       int firstval = arr[i];
//       int secondval = arr[n-i-1];

//       arr[i]=secondval;
//       arr[n-i-1] = firstval;
//    }
// }
