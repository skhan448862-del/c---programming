//  arrays syntax it is use for store same data type in a single variable

// # include <stdio.h>
// int main(){

    // int marks[3] = {97, 89, 99}; // array syntax....

    //   now we are output and input in arrays
    // arrays me 0 base index hota hai
    // if we are put in arrays uske index se jayada value then it is a run time error so we very careful to write a array in our code

    // int marks[3];
    // printf("enter phy marks : ");
    // scanf("%d", &marks[0]);

    // printf("enter che marks : ");
    // scanf("%d", &marks[1]);

    // printf("enter math marks : ");
    //  scanf("%d", &marks[2]);

    //  printf("phy = %d, math = %d, che = %d", marks[0], marks[2], marks[1]);


    //  write a function to get price of 3 items with gst
    
//    float price[3];
//    printf("enter 3 prices : ");
//    scanf("%f", &price[0]);  
//     scanf("%f", &price[1]);
// scanf("%f", &price[2]);
  
//      printf("total price 1 = %f\n", price[0] + 0.18 * (price[0]));
//     printf("total price 1 = %f\n", price[1] + 0.18 * (price[1]));
// printf("total price 1 = %f\n", price[2] + 0.1* (price[2]));
    

    
//     return 0;
// }

// intiallizing and airthmatic operator in arrays by pointer

// # include <stdio.h>


    // float marks[]= {89.8, 95.78, 97.69};//intializing arrays 
    // when we are increament  or decreament in pointer adress change by bites of data type 

    // int age = 56;
    // int *ptr = &age;

    // printf("ptr = : %u\n", ptr);
    // *ptr++;
    // printf("ptr = : %u\n", ptr);


    //    int aadhar[5];
    //    input
//    int *ptr= &aadhar[0];
   

//     for(int i = 0; i<5; i++){

//         printf("%d index : ", i);
//         scanf("%d", (ptr+i));
//     }

// output
    //   for(int i=0; i<5; i++){

    //     printf("%d index = %d\n",i,  *(ptr+i));
    //   }

    // arr , pointer and functions





//     # include <stdio.h>
           
// void printNumbers(int arr[], int n);


//     int main(){

//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
//       printNumbers(arr, 7);

//     return 0;
//     }

//     void printNumbers(int arr[], int n){
//         for(int i=0; i<n; i++){
//             printf("%d\t", arr[i]);
//         }

       
    // }


    //write a function to access odd numbers in arrays

//     # include <stdio.h>

//  int countOdd(int arr[], int n);

//     int main(){

//         int arr[] = {12, 13, 15, 17, 78, 89, 96};

//         printf("%d", countOdd(arr, 7));
        

//         return 0;
//     } 


//    int countOdd(int arr[], int n){

//     int count = 0;

//         for(int i=0; i<n; i++){
            
//               if(arr[i] % 2 != 0){
                 
//                 count++;

//         }
            
//     }

//                    return  count;
//  }


//    take input of 5 aadhar number in index


# include <stdio.h>

int main(){


    int aadhar[5];

    // input

    for(int i=0; i<5; i++){

        printf(" %d  index  :", i);
        scanf("%d" , &aadhar[i]);
    }

    for(int i = 0; i<5; i++){

        printf(" %d index :  %d\n ", i,aadhar[i]);
    }

    return 0;
}
    