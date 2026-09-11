# include <stdio.h>
# include <string.h>
void countVow(char str[]);

void inputStr(char str[]);

int main(){

    char name[200];
    char fullName[200];
    int count = 0;
    
  inputStr(name);
  printf("your name is : %s\n", name);

  strcpy(fullName, name);
  printf("you name is : %s\n", fullName); // copy string logic

  int len = strlen(name);

  for(int i = len; i >= len; i--){
    printf("%c", name[i]);
  }

    printf("\n");

  for(int i = 0 ; name[i] != '\0'; i++){
    count++;
  }

  printf("number of charcter in your sentence : %d\n", count - 1);

  countVow(name);
    return 0;

}

//  input by function ->

void inputStr(char str[]){
    printf("enter full name : ");
    fgets(str , 200, stdin);
}

void countVow(char str[]){
  int vowles = 0;
  int consonants = 0;


  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      vowles++;
    }else {
      consonants++;
    }
  }
  printf("vowles are : %d\n", vowles);
  printf("consonants are : %d\n", consonants);
}