
#include <bits/stdc++.h>
using namespace std;
static int position = -1;
const int stackMaxSize = 100;
class stack_using_array
{
private:
    int array[100];
    int currrentStackSize = 0;

public:
    stack_using_array();
    void printStack();
    void push(int value);
    void peek();
    void pop();

    ~stack_using_array();
};

stack_using_array::stack_using_array()
{
    for (int i = 0; i < stackMaxSize; i++)
        array[stackMaxSize] = 0;
}

stack_using_array::~stack_using_array()
{
}

void stack_using_array::printStack()
{
    if (position == -1)
        cout << "stack is empty" << endl;
    else
    {
        for (int i = 0; i <= position; i++)
            cout << array[i] << "  ";
    }
    cout << endl;
}
void stack_using_array::push(int value)
{
    position++;
    if (position < stackMaxSize)
    {
        array[position] = value;
    }
    else
    {
        cout<< "stack is full";
    }
}
void stack_using_array::pop()
{
    if (position == -1)
        cout << "stack is empty" << endl;
    else
    {
        array[position] = -1;
        position--;
    }
}
void stack_using_array::peek()
{
    cout << array[position] << endl;
}
int main()
{
    stack_using_array *stack = new stack_using_array();
    stack->printStack();
    stack->push(12);
    stack->push(13);
    stack->push(3);
    stack->push(43);
    stack->push(56);
    stack->push(12);
    stack->peek();
    stack->printStack();
    stack->pop();
    stack->peek();
    stack->pop();
    stack->pop();

    stack->printStack();
    return 0;
}
