#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[5],i,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("after reversing the array");
	for(i=5;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
