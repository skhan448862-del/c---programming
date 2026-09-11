# include <stdio.h>
# include <string.h>

void inputStr(char str[]);

int main(){
    char name[200];
    char fullName[200];
    
  inputStr(name);
  printf("your name is : %s\n", name);

  strcpy(fullName, name);
  printf("you name is : %s\n", fullName); // copy string logic

  int len = strlen(name);

  for(int i = len; i >= len/2; i--){
    printf("%c", name[i]);~
  }
    return 0;

}

//  input by function ->

void inputStr(char str[]){
    printf("enter full name : ");
    fgets(str , 200, stdin);
}