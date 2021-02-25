// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// time- O(N) and space - O(N).
ll FindMaxSum(ll array[], ll n)
{
	if(n == 0) return 0;
    vector<ll> dp(n);
    int including, notIncluding;
	//cout << array[0];
    including = array[0];
    notIncluding = 0;
    dp[0] = max(including, notIncluding);

    including = array[1];
    notIncluding = dp[0];
    dp[1] = max(including, notIncluding);

    for(ll i = 2; i < n; i++) {
        including = array[i] + dp[i-2];
        notIncluding = dp[i-1];
        dp[i] = max(including, notIncluding);
    }
  return dp[n-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;++i)
			cin>>a[i];
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
