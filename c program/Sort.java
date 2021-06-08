import java.util.*;
public class Sort
{
	public static void main(String[] args)
	
		{
		 int i,j;
		 int temp,sum=0,tot=0;
		 float avg=0;
		 int a[]={2,6,4,7,9,1};
		 
		 for(i=0;i<a.length-1;i++)
		 	{
		         for(j=i+1;j<a.length;j++)
		            {
		             if(a[i]>a[j])
		               {
		                temp=a[i];
		                a[i]=a[j];
		                a[j]=temp;
		                
		                
		               }
		               
		            }
		    }
			 
		for(i=0;i<a.length;i++)
		{
			sum=sum+a[i];
			tot=sum;
			avg=tot/6;
		}
		System.out.print(avg);
		}
		
}
				 
				 
		         