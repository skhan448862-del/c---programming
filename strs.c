# include <stdio.h>
void inputname( int n, char str[n][500]);
void inputMark(int arr[], int n);

int main(){
    int n;
    int N;

    printf("enter number of student : ");
    scanf("%d", &n);
    printf("enter number of subject :");
    scanf("%d", &N);
    int marks[N];
    char name[n][500];
    inputname(n , name);
    inputMark(marks, N);
    for(int i = 0; i < n; i++){
        printf("name of %d student : %s\n", i + 1, name[i]);
    }

    for(int i = 0; i < N; i++){
        printf("marks of %s in %d subject is : %d\n", name[i], i + 1, marks[i]);
    }
    return 0;
}

void inputname(int n, char str[n][500]){
    for(int i = 0; i < n; i++){
        printf("enter %d student name : ", i + 1);
        scanf("%s", &str[i]);
    }
}

void inputMark(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("enter %d subject marks : ", i + 1);
        scanf("%d", &arr[i]);
    }
}