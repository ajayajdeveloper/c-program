#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],b[10],c[10],i,j,n,n1,temp;
    printf("enter the no of ele in array1\n");
    scanf("%d",&n);
    printf("enter 1st array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter size of 2nd array");
    scanf("%d",&n1);
    printf("enter 2nd array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    j=0;
    for(i=n;i<n+n1;i++)
    {
        c[i]=b[j];
          //    printf("\n2nd array values are %d",c[i]);
        j++;
    }
    for(i=0;i<n+n1;i++)
    {
        printf("%d\n",c[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(j=0;j<n+n1;j++)
    {
        printf("sorted is %d\n",c[j]);
    }

    for(i=0;i<n+n1;i++)
    {
        if(c[i]==c[i+1])
        {
            temp=c[i];

         // printf("%d r d rep.ele\n",c[i]);
        }
        else
        printf("%d r d ele\n",c[i]);
    }

}
