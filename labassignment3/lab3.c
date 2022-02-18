// Amit Pai
// pai.ami@northeastern.edu
//  C program to check if the integer array contains duplicate elements.
#include <stdio.h>
#include <stdbool.h>

// creating a function to check if array is sorted
// returns: boolean
bool checksort(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        return true;
      }
      else
      {
        return false;
      }
    }
  }
}

// Using Selection sort to sort the array
void selectionsort(int *arr, int size)
{

  // creating a temp variable for swapping
  int temp;
  // creating smallest element variable
  int smallest;
  // introducing outer loop for pass
  for (int i = 0; i < size - 1; i++)
  {
    smallest = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[smallest])
      {
        smallest = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  if (checksort(arr, size) == true)
  {
    printf("\nThe array has duplicate elements\n");
  }
  else
  {
    printf("\nThe array has no duplicate elements\n");
  }
}

int main()
{

  int arr[] = {20, 7, 3, 2, 12, 10, 15, 2, 2, 2, 2, 4};
  int arr2[] = {20, 7, 3, 2, 12, 10, 15, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int i;
  // insert your code here

  selectionsort(arr, size);
  selectionsort(arr2, size2);
  checksort(arr, size);
  checksort(arr2, size2);
  return 0;
}
