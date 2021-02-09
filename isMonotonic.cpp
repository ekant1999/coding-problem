#include<iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int> array) {
  bool isINC=true;
	bool isDEC=true;
	if(array.size()==0 or array.size()==1)
			return true;
	else{
	for(int i=0; i< array.size()-1; i++){
		
		if(array[i] == array[i+1])
		{
			isINC = isINC and true;
			isDEC = isDEC and true;
		}
		if(array[i] > array[i+1])
		{
			isINC = isINC and false;
		}
		if(array[i] < array[i+1])
		{
			isDEC = isDEC and false;
		}
		
	}
  return (isINC or isDEC);
	}
}


int main(){
    
    vector<int> inp={-1, -5, -10, -100, -1100, -1101, -1102, -9001};
        cout<< isMonotonic(inp);
    return 0;
}

