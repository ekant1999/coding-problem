class Solution {
public:
    vector<int> productExceptSelf(vector<int>& array) {
        vector<int> product(array.size());
	int left=1;
	for(int i=0; i<array.size(); i++)
	{
		product[i]= left;
		left*=array[i];
	}
	int right=1;
	for(int i= array.size()-1; i>-1; i--)
	{
		product[i]*= right;
		right*=array[i];
	}
  return product;
    }
};
