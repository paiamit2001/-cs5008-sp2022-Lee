//Amit Pai
//pai.ami@northeastern.edu
// C program to check if the integer array contains duplicate elements.
#include<stdio.h>
#include<stdbool.h>



// creating a function to check if array is sorted
// returns: boolean
bool checksort(int *arr, int size){
      int i;
      for (i=0; i<size; i++){
      if (arr[i] == arr[i+1]){
     // printf("\nThe array has duplicate elements\n");
      return 1;
  }
     //printf("\nThe array has no duplicate elements\n");
   return 0;
  }
 }


// Using Selection sort to sort the array
void selectionsort(int *arr, int size){
  
// creating a temp variable for swapping
   int temp;
  int i, j;
// creating smallest element variable
  int smallest;
// introducing outer loop for pass
  for (i=0; i<size-1; i++){
      smallest = i;
    for (j=i+1; j<size; j++){
       if (arr[j] < arr[smallest]){
           smallest = j;
       }
    if (i != smallest){
     temp = arr[i];
     arr[i] = arr[smallest];
     arr[smallest] = temp;
     }
    }
  }
  for (i=0; i<size; i++){
    printf("%d ", arr[i]);
} 
  if (checksort(arr, size) == true){
    printf("\nThe array has duplicate elements\n");
  } else {
   printf("\nThe array has no duplicate elements\n");
 }
}
 
int main(){

  int arr[] = {20,7,3,2,12,10,15,2,2,2,2,4};
  int arr2[] = {20,7,3,2,12,10,15,4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int size2 = sizeof(arr2)/ sizeof(arr2[0]);
  int i;
  //insert your code here
  
 selectionsort(arr, size);
 selectionsort(arr2, size2);
 checksort(arr, size); 
 checksort(arr2, size2); 
return 0;
}

