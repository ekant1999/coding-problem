
#include <iostream>
using namespace std;

void fibonacci(int num, int a, int b, int n)
{
    if (n == num)
        return;
    int temp = a;
    a = b;
    b += temp;
    cout << b << " ";
    fibonacci(num, a, b, n + 1);
}
int main()
{
    int num;
     cout<<"Enter The Number Upto Which You Want The Fibbonaci Series To Be Printed:\n";
     cin>>num;
    if (num==1)
        cout<< "1"<<" ";
    else if (num>2)
        cout<< "1 1"<<" ";
    fibonacci(num, 1, 1, 2);
    return 0;
}
