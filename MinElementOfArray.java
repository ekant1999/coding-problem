public class Main
{
   public static int min(int a, int b)
    {
        if(a>b)
            return b;
        else
        return a;
        
    }
    public static int MinFinder(int arr[], int start,int end)
    
    {
        if(start==end){
            return arr[start];
        }
        if(start+1==end){
            return(min(arr[start],arr[end]));
        }
        int mid= start + (end-start)/2;
        return(min(MinFinder(arr,start,mid),MinFinder(arr,mid+1,end)));
    }
    
	public static void main(String[] args) {
	    int arr[]= {2,8,7,8,6,5,0,32,1,39,-10};
	    System.out.println(MinFinder(arr,0,arr.length-1));
	}
}
