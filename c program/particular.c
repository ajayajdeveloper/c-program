#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[5];
int i ,pos=2;
for(i=0;i<5;i++)
	{
		printf("enter the numbers");
		scanf("%d",&a[i]);
	}	
	for(i=pos;i<5;i++)
	{
	  a[i]=a[i+1];
	
	
	}
	for(i=0;i<4;i++)
	{
		printf(" after specific del %d\n",a[i]);
	}
	
}
