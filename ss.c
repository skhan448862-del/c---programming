# include <stdio.h>

int main(){
int n;
printf("enter size of array :");
scanf("%d", &n);

int arr[n];
for(int i = 0; i < n; i++){
    printf("enter numbers : ");
    scanf("%d", &arr[i]);

}

for(int i = 0; i < n; i++){
    printf("%d\t", arr[i]);
}

printf("\n");

int largest = arr[0], secondlar = arr[0];
for(int i = 0; i < n; i++){
    if(arr[i] > largest){
       secondlar = largest;
       largest = arr[i];
       
    }//else if(arr[i])
}

printf("largest number is : %d\n", largest);
printf("second largest number is : %d\n", secondlar);

return 0;

}