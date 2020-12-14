#include <iostream>
using namespace std;

int Min_Finder(int A[], int size)
{
    if (size == 1)
        return A[0];
    return min(A[size - 1], Min_Finder(A, size - 1));
}
int Max_Finder(int A[], int size)
{
    if (size == 1)
        return A[0];
    return max(A[size - 1], Max_Finder(A, size - 1));
}
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "min value " << Min_Finder(A, n) << endl;
    cout << "max value " << Max_Finder(A, n);

    return 0;
}
