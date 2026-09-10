# include <stdio.h>

int main(){
  int  n;
 
  printf("enter number :");
  scanf("%d", &n);

  int arr[100];
  for(int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < n; i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");

    int even = 0;
    int odd = 0;
    for(int i = 0; i < n ;i++){
        if (arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    printf("odd numbers are : %d\n", odd);
    printf("even numbers are : %d\n", even);


  return 0;
}