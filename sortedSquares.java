class Solution {
    public int[] sortedSquares(int[] array) {
		int arrayLen= array.length;
		int [] resultArray= new int[arrayLen];
		int start=0;
		int last= arrayLen-1;
		int end= arrayLen-1;
		while(start<=end)
		{
			if(array[start]*array[start]>array[end]*array[end])
			{
				resultArray[last]= array[start]*array[start];
				start++;
			}
			else
			{
				resultArray[last]=array[end]*array[end];
				end--;
			}
			last--;
		}
    return resultArray;
  }
}
