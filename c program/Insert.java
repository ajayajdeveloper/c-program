import java.util.*;
public class Insert
{
  public static void main(String[] args)
  {
   
   int array[]={1,2,4,5,6, };
   int i,pos=2,val=3;
   System.out.println("the array values are : "+Arrays.toString(array));
   
   for(i=array.length-1; i>pos ; i--)
   {
    array[i]=array[i-1];
    }
    array[pos]=val;
    System.out.println("new array: "+Arrays.toString(array));
    
   }
 }
   
   
   
   
