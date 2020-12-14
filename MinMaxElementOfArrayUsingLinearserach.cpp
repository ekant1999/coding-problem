
#include <iostream>
#include <vector>
using namespace std;
vector<int> MIN_MAX_Finder(int array[], int size)
{
    int min = INT32_MAX, max = INT32_MIN;
    vector<int> res;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
        if (array[i] > max)
            ;
        max = array[i];
    }
    res.push_back(min);
    res.push_back(max);
    return res;
}
int main()
{
    int size;
    cout << "Please enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Please enter an integer value greater than zero: ";
        cin >> size;
    }
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    vector<int> res = MIN_MAX_Finder(array, size);
    cout << "min value " << res[0] << endl;
    cout << "max value " << res[1] << endl;
    return 0;
}
