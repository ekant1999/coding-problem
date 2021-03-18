#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isStringMatched(string text, string pattern)
{
    int patternSize= pattern.size();
    int textSize= text.size();
    int prefixSufixArray[patternSize];
    int i=0, j=0;
    int k=0;
    for(;j < patternSize;)
    {
        k++;
        if(i==0 and j==0){
            prefixSufixArray[i]=0;
            j++;
        }
        else if(pattern[i]==pattern[j]){
            prefixSufixArray[j]=i+1;
            i++;
            j++;
        }
        else{
            i=0;
            prefixSufixArray[j]=0;
            j++;
        }
    }
    int patternStart=0, textStart=0;
    while(textStart < textSize)
    {
        if(patternStart==0 and text[textStart]!=pattern[patternStart])
        {
            textStart++;
        }
        else if(text[textStart]==pattern[patternStart])
        {
            textStart++;
            patternStart++;
        }
        else if(text[textStart]!=pattern[patternStart]){
            patternStart=prefixSufixArray[patternStart-1];
        }
        if(patternStart==patternSize)
        {
            return true;
        }
    }
    // for(int m=0; m<10; m++)
    // {
    //     std::cout << m << "  ";
    // }
    
    return false;
}

int main()
{
    
    string text="acbacxabcdabxabcdacbacdabcy";
    string pattern = "cxabcdabxabc";
    cout<< isStringMatched(text,pattern)<< endl;
    
    return 0;
}
