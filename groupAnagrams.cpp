#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> words) {
	vector<bool> check(words.size());
	vector<string> wordsCopy(words.size());
	vector<vector<string>>  result;
	for(int i=0 ; i<words.size(); i++)
	{
		wordsCopy[i]= words[i];
		check[i]= false;
		sort(words[i].begin(), words[i].end()); 
	}
	for(int j=0; j<words.size()-1;j++)
	{
		if(check[j]!=true){
				vector<string>res;
			res.push_back(wordsCopy[j]);
		for(int k=j+1; k<words.size();k++)
		{
			if(check[k]!=true and words[j]==words[k]){
				res.push_back(wordsCopy[k]);
				check[k]=true;
			}
		}
		check[j]=true;
		result.push_back(res);
		}
	}
  return result;
}
 int main()
 {
      vector<string> words = {"yo",  "act", "flop", "tac",
                              "foo", "cat", "oy",   "olfp"};
                              
    vector<vector<string>> result=groupAnagrams(words);
    for(vector<string> i : result){
        for(string j : i){
                cout << j << "   ";
        }   
        cout<<endl;
 }
 }
