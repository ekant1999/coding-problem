#include <vector>
#include <algorithm>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	int i=0, j=0 ;
	int min= INT_MAX;
	vector<int> res= {0,0};
	while(i<arrayOne.size() and j<arrayTwo.size()){
		if(min > (abs(arrayOne[i]-arrayTwo[j])))
		{
				res[0]=arrayOne[i];
				res[1]=arrayTwo[j];
				min= abs(arrayOne[i]-arrayTwo[j]);
			}
		if(arrayOne[i] > arrayTwo[j])
			j++;
		else
			i++;
	}
  return res;
}

int main() 
{
    vector<int> A = {1, 2, 11, 5}; 
    vector<int> B = {4, 12, 19, 23, 127, 235}; 
    
    vector<int> res= smallestDifference(A, B); 
  
    return 0; 
} 
