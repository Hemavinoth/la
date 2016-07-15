
public class Num23 {

	
	public static void main(String[] args) {
		int count=3;
		int n=count;
		char temp;
      int len=args[0].length();
      len=len-1;
      char[] c=args[0].toCharArray();
      while(count!=0)
      {
    	  int b=0;
    	  int i=0;
    	  for(int j=0;j<len;j++)
    	  {
    		  if(c[i]<c[j])
    		  {
    			  i=j;
    			  b=j;
    		  }
    	  }
    	  for(int k=b;k<len;k++)
    	  {
    		  c[k]=c[k+1];
    	  }
    	  count--;
    	  c[len]=0;
    	 len = len--;
      }
      for(int i=0;i<=len-n;i++){
      for(int j=i;j<=len-n;j++)
      {
    	  if(c[j]<c[i])
    	  {
    		temp=c[j];
    		c[j]=c[i];
    		c[i]=temp;
    	  }
      }
      }
      for(int i=0;i<=len-n;i++)
      {
    	  System.out.print(c[i]);
      }
	}

}
