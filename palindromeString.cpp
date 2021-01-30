#include<iostream>
using namespace std;

// time O(n) || space O(n) call stack
bool isPalindromeHelper(string str, int start, int end)
{
	if(str[start]!=str[end])
		return false;
	if(start>=end)
		return true;
	if(str[start]==str[end])
		return(isPalindromeHelper(str,start+1,end-1));
}

bool isPalindrome(string str) {
  return isPalindromeHelper(str, 0, str.length()-1);
}

// time O(n) || space O(n) extra array
bool isPalindromeUsingArray(string str)
{
	vector<char> reverseString;
	for(int i=str.length()-1; i>=0; i--)
	{
		reverseString.push_back(str[i]);
	}
	return (str== string(reverseString.begin(), reverseString.end()));
	
}


// time O(n) || space O(1)
bool isPalindromeUsingIterative(string str) {
  int start= 0;
	int end= str.length()-1;
	while(start<=end)
	{
		if(str[start]!=str[end])
			return false;
		start++;
		end--;
	}
	return true;
}

int main()
{
    string str = "XYBYBYX";
 
    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
 
    return 0;
}




