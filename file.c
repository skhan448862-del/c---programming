# include <stdio.h>

// /file is a structure which is hidden 
// it is already define in different system liken linux, mac, window........


// "r" -> use for read file
// "rb" -> use for read file in binary format
// "wb" -> use for write in binary form

// "w" -> use for write in file
// we can replace fscanf by fgetc(fptr) and fprintf by putc(data, fptr)
// these are the modes to tell the complier that what is actually we want to do
// EOF  is a null character which is comes end of the string
// it is like '\0' .......


int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    int n;
    printf("enter number :");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            fprintf(fptr, " %d\t",  i);
        }
    }

    fclose(fptr);
    return 0;
}