#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int a[5];
int i;
int num;
for(i=0;i<5;i++)
	{
	printf("enter the  value\n");
	scanf("%d",&num);
	a[i]=num;
	}
	for(i=0;i<5;i++)
	printf("the array values are %d\n",a[i]);
}
