import java.util.*;

class Program {

  public int nonConstructibleChange(int[] coins) {
    int change=0;
		Arrays.sort(coins);
		
		 System.out.printf("Modified arr[] : %s",
                          Arrays.toString(coins));
		
		if(coins.length>0 && coins[0]!=1)
			return 1;
		else
			change=1;
		for(int i=1 ; i<coins.length; i++)
		{
			if(change+1 >= coins[i])
			{
				change += coins[i];
			}
			else
				return change+1;
		}
		return coins.length>0 ? change+1 : 1 ;
  }
}
