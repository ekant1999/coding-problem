#include<iostream>

using namespace std;

int findTotalMoves( int m, int n)
{
int count=0;
if(n==0 || m==0)
	return 0;
if(n==1 && m==1)
	return 1;

count+= findTotalMoves(m-1,n);
count+= findTotalMoves(m,n-1);
return count;
}
int main()
{
int rows, coloumns;
 cin>> rows >> coloumns;

cout<< "total number of possible moves are " << findTotalMoves(rows, coloumns)<< endl;
return 0;
}
