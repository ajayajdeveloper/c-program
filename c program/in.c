#include<stdio.h> 
  
void main()
{

int arr1[5],arr2[5];
int m;
int n;
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
  

  while(i < m) 
   printf(" %d ", arr1[i++]); 
  while(j < n) 
   printf(" %d ", arr2[j++]); 
} 
