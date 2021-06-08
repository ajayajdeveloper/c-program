import java.util.*;
public class REV
{
	public static void main(String[] args)
        {
         int i,temp;
         int a[]={1,2,3,4,5};
         System.out.println("the array value are :"+Arrays.toString(a));
 	 for(i=0;i<a.length/2;i++)
 	 {
 	   temp=a[i];
 	   a[i]=a[a.length-i-1];
 	   a[a.length-i-1]=temp;      	
          }
          System.out.println("reverse array:"+Arrays.toString(a));
}}
