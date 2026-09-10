# include <stdio.h>
int check(char str[], char ch);

int main(){
    char str[] = "sahilkhan";
    printf("%d", check(str, 'S'));
    return 0;
}

int check(char str[], char ch){

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            return 1;
        }
    }
    return 0;
}