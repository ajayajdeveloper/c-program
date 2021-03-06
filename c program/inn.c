#include<stdio.h> 
  
/* Function prints union of arr1[] and arr2[] 
   m is the number of elements in arr1[] 
   n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
      printf(" %d ", arr1[i++]); 
    else if (arr2[j] < arr1[i]) 
      printf(" %d ", arr2[j++]); 
    else
    { 
      printf(" %d ", arr2[j++]); 
      i++; 
    } 
  } 
  
  /* Print remaining elements of the larger array */
  while(i < m) 
   printf(" %d ", arr1[i++]); 
  while(j < n) 
   printf(" %d ", arr2[j++]); 
} 
