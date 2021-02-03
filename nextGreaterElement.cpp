#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void findNextLargestNumber(vector<int> array)
{

    std::stack<int> auxStack;

    for (int i = 0; i < array.size(); i++)
    {
        if (auxStack.empty() or array[i] < auxStack.top())
        {
            auxStack.push(array[i]);
        }
        else
        {
            while (array[i] > auxStack.top())
            {
                cout << auxStack.top() << " ---> " << array[i] << endl;
                auxStack.pop();
            }
            auxStack.push(array[i]);
        }
    }
    while (auxStack.empty() == false)
    {
        cout << auxStack.top() << " ---> " << -1 << endl;
        auxStack.pop();
    }
}

void findNextLargestNumberInOrder(vector<int> array)
{
    stack<int> auxStack;

    int resultArray[array.size()];
    for (int i = array.size() - 1; i >= 0; i--)
    {
        while (!auxStack.empty() && auxStack.top() <= array[i])
            auxStack.pop();

        if (auxStack.empty())
            resultArray[i] = -1;
        else
            resultArray[i] = auxStack.top();

        auxStack.push(array[i]);
    }

    for (int i = 0; i < array.size(); i++)
        cout << resultArray[i] << "  ";
}
int main()
{
    std::vector<int> array = {15, 7, 6, 12, 14};
    findNextLargestNumber(array);
    findNextLargestNumberInOrder(array);
    return 0;
}

/*
6 ---> 12
7 ---> 12
12 ---> 14
14 ---> -1
15 ---> -1
-1  12  12  14  -1  
*/
