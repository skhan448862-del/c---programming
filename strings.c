// '\0' is a (null character) it is use to connect all character in arryas
// we are also use to "" to write charcter in joint
// examples

// # include <stdio.h>

// int main(){

    // char name[] = {'S', 'A', 'H', 'I', 'L', '\0'};
//     char name[] = "SAHIL";// these are two types of initialising a stirng 
//      printf("%s", name);
//      return 0;

// }



//  create  a string first name and last name and print by a loop

// # include <stdio.h>
// void printString(char arr[]);

// int main(){

//     char firstname[] = "SAHIL";
//     char lastname[] = "KHAN";

//     printString(firstname);
//     printString(lastname);

//     return 0;

// }

// void printString(char arr[]){

//     for(int i = 0; arr[i] != '\0' ; i++){

//         printf("%s", arr[i]);
//     }
//     printf("\n");
// }



// ask the name of user and printf after 



# include <stdio.h>
int countlength(char arr[]);

int main(){

    // char name[60];
    // printf("name : ");
    // scanf("%s", name); // here & is not allow becsuse it is  arrays are act as a pointer

    //  scanf can not take multiple strings 

    //  so we use fgets as input and
    // puts as a output
    // fgets (str , n , stdin);  format;
    // puts (str); output
    // printf("your name is : %s" , name);


    // char fullName[100];

    // printf("enter your name : ");
    // fgets(fullName, 100, stdin);
    // puts(fullName);


    //  we use generally arrays in pointer  ....  example

    // char *canchange = "hello world";
    //  puts(canchange);

    //  canchange = "hello";
    //  puts(canchange);
  
    //   char cannotchange[] = "hello world";
    //   puts(cannotchange);
    //   cannotchange = "hello";
    //   puts(cannotchange);




    //   how many charcters  in  user name and get input name by user

    char name[100];
    printf("enter your name : ");
    fgets(name, 100, stdin);
    printf("characters in your name is : %d", countlength(name));
    return 0;
}


int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count - 1;
}