import java.util.*;
public class Rem_dup
{
 public static void main(String[] args)
 {
  int i,d,c=0;
  int a[]={20,20,30,40,50,50};
  int b[]=new int[4];
  
  	for(i=0;i<a.length-1;i++)
  	{
  	 if(a[i]!=a[i+1])
  	 {
  	 b[c++]=a[i];
         }
        
        }
        
          b[c]=a[i];
          d=b.length;
        
       for(i=0;i<b.length;i++)
	   {
		   System.out.print(b[i]+" ,");
	   }
        System.out.println("       the length of the new array is  "+d);
        
      }
      
  }
        
        
       
        
 
