#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a[10],b[10],i,j,n,m;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter 1st array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
	    printf("enter size of 2nd array\n");
	    scanf("%d",&m);
	    printf("enter 2nd array elements\n");
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	        
	    }
	    for(i=0;i<n;i++)
	    
	    	printf("the array %d\n",a[i]);
		
		 for(i=0;i<m;i++)
	
	    	printf("%d",b[i]);
		
	    
	    
	    
	}

