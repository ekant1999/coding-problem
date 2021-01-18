
#include<bits/stdc++.h>
using namespace std;


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
//time complexity of this function is O(n^2) as we are computing all the possible 
//moves to calculate the resulting array.
// when the array is too lagre the function will time limit error.
int maxSubarraySum(int arr[], int n) {

  vector < int > max;
  for (int j = 0; j < n; j++) {
    int one = arr[j];
    if(j==n-1)
    {
       max.push_back(arr[j]); 
    }
    else{
    max.push_back(arr[j]);
    for (int i = j+1; i < n; i++) {
      one += arr[i];
      max.push_back(one);
    }
    }
  }
  return ( * max_element(max.begin(), max.end()));
}
int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
