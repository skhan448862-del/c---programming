# include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("enter number 1 to n for sum : ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        sum+=i;
    }
    printf("sum of 1 to %d natural number = %d\n", n, sum);
    return 0;
}