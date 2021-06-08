import java.util.*;
public class Dup
{
 public static void main(String[] args)
 {
  int i,j,count=0;
  int a[]={10,20,30,40,30,10,50};
  int b[]=new int[7];
  int l=a.length;
  for(i=0;i<l;i++)
  	{
  	 for(j=i+1;j<l;j++)
  	 {
  	  if(a[i]==a[j])
  	   {
		   
  	     b[i]=a[i];
		 
  	   }	
	 }
  	}
  
	  System.out.println("the array after removing duplicate : "+b[i]);
		
	 
   }
 }	 
  

  	
 
