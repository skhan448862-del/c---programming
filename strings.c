// '\0' is a (null character) it is use to connect all character in arryas
// we are also use to "" to write charcter in joint
// examples

// # include <stdio.h>

// int main(){

    // char name[] = {'S', 'A', 'H', 'I', 'L', '\0'};
//     char name[] = "SAHIL";// these are two types of initialising a stirng 
    //  printf("%s", name);
    //  return 0;

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



// # include <stdio.h>
// # include <string.h>

// int countlength(char arr[]);

// int main(){

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

//     char name[100];
//     printf("enter your name : ");
//     fgets(name , 100, stdin);   
//     int lenght = strlen(name);
//     printf("characters in your name is : %d", lenght);
//     return 0;
// }


// int countlength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count - 1;
// }


//  character numbers in name of user by using library of strings

// # include <stdio.h.>
// # include <string.h>

// int main(){
//     char name[100];
//     printf("enter your name");
//     fgets(name, 100, stdin);
//     int lehgth = strlen(name);
//     printf("character in your name is : %d", lehgth - 1);
//     return 0;
// }


// # include <stdio.h>
// # include <string.h>

// int main(){

//     char oldStr[] = "oldStr";
//     char newStr[] = "newStr";

//     strcpy(newStr, oldStr); //string copy syntax and command
//     puts(newStr);
//     return 0;
// }




// write a programme to connect two strings

// # include <stdio.h>
// # include <string.h>

// int main(){

//     char firstStr[] = "hello ";   // here size is important to connect two strings
//     char secStr[100] = "world ";
//     strcat(secStr, firstStr);
//     puts(secStr);
//     return 0;
// }


// first take input by user and print 

// # include <stdio.h>
// # include <string.h>

// int main(){
//     char str[200];
//     char ch;
//     int i = 0;

//     while(ch != '\n'){
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     return 0;
// }










//  salting concept

// # include <stdio.h>
// # include <string.h>

// void salting(char password[]);

// int main(){
//     char password[100];
//     scanf("%s", password);
//     salting(password);

// }

// void salting(char password[]){
//     char salt[] = "123";
//     char newpassword[200];

//     strcpy(newpassword, password);
//     strcat(newpassword, salt);

//     puts(newpassword);
// }






//  write a function named slice , which takes a string & return a sliced string from  index n to m


# include <stdio.h>
# include <string.h>

void slice(char str[], int n , int m);

int main(){
    char str[] = "helloworld";
    slice(str, 3, 6);
}

void slice(char str[], int n , int m){ // n & m are valid numbers
    char newstr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++){

        newstr[j] = str[i];
    }
        newstr[j] = '\0';
        puts(newstr);
}