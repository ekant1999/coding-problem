
#include <iostream>

using namespace std;

using namespace std;


// in this function we are keeping the track of the two variable current variable(i) and previous variable(j)
// time- O(N) space- O(N)
string runLengthEncoding (string str)
{
  int counter = 1;
  string outputString = "";
  int i = 1;
  int j = 0;
  while (i < str.length ()+1)
    {
      if (str[i] == str[j])
	{
	    if(counter<=8)
	        counter++;
	   else
	   {
		outputString.append(str[j]+to_string(counter));
		counter=1;
	   }
	}
      if (str[i] != str[j])
	{
	  outputString.append (str[j]+to_string (counter));
	  counter = 1;
	}
      i++;
      j++;
    }
  return outputString;
  }

int main ()
{
  cout << runLengthEncoding("wwwwwwwWWWWWBBCCCCDD");
  return 0;
}
//7w5W2B4C2D

