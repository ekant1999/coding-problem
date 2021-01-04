#include<bits/stdc++.h>

using namespace std;

/*
 In this funciton we look for all positive contiguous segments of the array.
 And keep track of maximum sum contiguous segment among all positive segments.
 Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far.
*/
int maxSubarraySum(int arr[], int n) {

  int max_so_far = 0;
  for (int j = 0; j < n; j++)
    if (max_so_far + arr[j] > arr[j]) {
      max_so_far += arr[j];
      arr[j] = max_so_far;
    }
  else {
    max_so_far = arr[j];
  }
  return ( * max_element(arr, arr + n));

}

int main() {
  int t, n;
  cin >> t;
  while (t--) {

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];

    cout << maxSubarraySum(a, n) << endl;
  }
}
