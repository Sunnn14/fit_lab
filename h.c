#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


void bubble_sort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
        if(arr[j] > arr[j + 1]){
            int tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
        }
        }
    }
}

int main() {
  int *arr;
  int n;


  scanf("%d", &n);
  
  // TODO: arr заагчид n хэмжээний санах ой олгох
    arr = (int *)malloc(n * sizeof(int));
  // TODO: гараас элемент уншиж arr-д олгох
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

  bubble_sort(arr, n);
  print_arr(arr, n);

  free(arr);
  return 0;
}


/// test uurchlult 

//huheuchwicwq
/// test uurchlult 1


/// test uurchlult

/// test uurchlult
