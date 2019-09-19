#include <iostream>
// Sorting an array in ascending order

// Setting up the sorting algorithm
void bubbleSort (int arr[], int n) {
  int i, aux;
  bool flag;
  
  do {
    flag = false;
    // Iterating vector
    for (i=0; i < n-1; i++) {
      // if i value in vector is bigger that i+1 value in vector
      if (arr[i] > arr[i+1]) {
        // interchange the values
        flag = true;
        aux = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = aux;
      } // end if
    } //end for
  } // end do
  while (flag == true);
}

// Printing the ordered vector
void printArray (int arr[], int arraySize) {
    int i; 
    for (i=0; i < arraySize; i++) 
      std::cout << "  " << arr[i];
  std::cout << "\n";
}

// Driver program
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
