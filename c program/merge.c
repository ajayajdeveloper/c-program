#include<stdio.h>
#include<string.h>
int main()
{
	int a[]={1,2,3,4};
	int b[]={6,7,8};
	int i ,j;
	int m=4,n=3;
	
	for(i=0;i<n;i++)
	{
	a[m+i]=b[i];

	}
	for(i=0;i<7;i++)
	printf(" %dthe value are\n",a[i]);
}
