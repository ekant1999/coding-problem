// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:		

		
	
	int lps(string pattern)
	{
	    // Your code goes here
	    int n = pattern.size();
	    int lps[n];
	    lps[0] = 0;
	    int len = 0;
	    int i = 1;
	    while(i<n)
	    {
	        if(pattern[len] == pattern[i])
	        {
	            len++;
	            lps[i] = len;
	            i++;
	        }
	        else //s[len] != s[i]
	        {
	            if(len != 0)
	            {
	                len = lps[len-1];
	            }
	            else    //len==0
	            {
	                lps[i] = 0;
	                i++;
	            }
	        }
	    }
	    int ans = -1;
	    for(int i=0; i<n; i++)
	        ans = max(ans, lps[i]);
	    return lps[n-1];
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
