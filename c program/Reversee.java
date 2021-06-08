import java.util.*;
class Reversee
{
	public static void main(String[] args)
	{  
	    int i;
		String temp;
	    String []a={"ajay"};
		
     for(i=0;i<a.length/2;i++)
 	 {
 	   temp=a[i];
 	   a[i]=a[a.length-i-1];
 	   a[a.length-i-1]=temp;      	
     
	 
	 for(i=0;i<a.length;i++)
	 {
		 System.out.println("the reversed array :"+a[i]);
	 }
	}
}
}