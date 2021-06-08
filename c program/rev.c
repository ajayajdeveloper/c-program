#include <stdio.h>
 
int main()
{
   char a[1000], b[1000];
   int i, j, count = 0;
 
   printf("Input a string\n");
   scanf("%s",a);
   while (a[count] != '\0')
      count++;
   j = count - 1;
   for (i= 0; i < count; i++) {
      b[i] = a[j];
      j--;
   }
 
   b[i] = '\0';
 
   printf("%s\n", b);
 
   return 0;
}

