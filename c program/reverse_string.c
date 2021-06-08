#include<stdio.h>
#include<conio.h>
#include<string.h>

	void main()
	{  
	int a[100],b[100],temp;
	int i=0,j=3;
	printf("enter the string to be reversed\n");
	scanf("%s",&a);
	
	while(i<j)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			i++;
			j--;	
		}
		printf("the reversed string is %s",a[i]);
	
}
