using System;
					
public class SumRegion{
  // time complexity-O(M*N) space-O(1)
	public static int sumRegionBruteForce(int[,] array, int row1, int col1, int row2, int col2)
	{	
	int sum=0;
		for(int i= row1; i<=row2; i++)
		{
			for(int j=col1; j<=col2; j++)
			{
				sum+= array[i,j];
			}
			
		}
		
		return sum;
	}


};
public class Program
{
	public static void Main()
	{
		int[,] matrix= {{3,0,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}};
		int result= SumRegion.sumRegionBruteForce(matrix,2,1,4,3);
		Console.WriteLine(result);
	}
}
