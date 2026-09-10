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

    int largest , smallest, secondlargest;

    secondlargest = arr[0]; 
    smallest = arr[0];
    largest = arr[0];
    for(int i = 0; i < n; i++){
      if(arr[i] > largest){
        secondlargest = largest;
        largest = arr[i];
        
      } else if(secondlargest > arr[i] && arr[i] != largest){

        secondlargest = arr[i];
      }
    }

    printf("largest number is : %d\n", largest);

    for(int i = 0; i < n; i++){
      if(arr[i] < smallest){
        smallest = arr[i];
      }
    }

    printf("smallest number is : %d\n", smallest);
    printf("second largest number is : %d\n", secondlargest);


  return 0;
}