// # include <stdio.h>
// void printNumbers(int arr[], int n);

// int main(){

//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printNumbers(arr, 9);

//     return 0;

// }

// void printNumbers(int arr[], int  n){

//     for(int i=0; i<n; i++){

//         printf("%d\t", arr[i]);
//     }
// }




// multiple arrays most arrays are 2D dimenssaions


# include <stdio.h>
# include <conio.h>

int main(){
    // 2 students ke 3 subjects ke marks store   2 * 3
    
    int marks[2][3];
    marks[0][0] = 89;
    marks[0][1] = 95;
    marks[0][2] = 97;


    marks[1][0] = 85;
    marks[1][1] = 99;
    marks[1][2] = 94;

    printf("%d", marks[1][2]);
}