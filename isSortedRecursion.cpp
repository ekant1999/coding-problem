#include <iostream>
using namespace std;

bool isSorted(int A[], int size)
{
    if(size==1)
    {
        return true;
    }
    return(A[size]>A[size-1]?isSorted(A,size-1):false);
}
int main(){

    int A[] = {4,3,2,1};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "min value " << isSorted(A, n) << endl;
    return 0;
}
