#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int value;
    Node *node;
};
class stackUsingLinkedList
{
private:
    Node *head;
public:
    stackUsingLinkedList(/* args */);
    stackUsingLinkedList(int val);
    ~stackUsingLinkedList();
    void push(int val);
    void pop();
    void printStack();
    void peek();
};
stackUsingLinkedList::stackUsingLinkedList(/* args */)
{
    head = NULL;
}

stackUsingLinkedList::stackUsingLinkedList(int val)
{
    Node *newNode = new Node();
    newNode->value = val;
    newNode->node = NULL;
    head = newNode;
}
void stackUsingLinkedList::push(int val)
{
    Node *newNode = new Node();
    newNode->value = val;
    newNode->node = head;
    head = newNode;
}
void stackUsingLinkedList::pop()
{
    if (head == NULL)
    {
        cout << "the stack is empty";
        return;
    }
    else
    {
        Node *refNode = head->node;
        delete (head);
        head = refNode;
    }
}
void stackUsingLinkedList::printStack()
{
    if (head == NULL)
    {
        cout << "the stack is empty" << endl;
        return;
    }
    else
    {
        Node *refNode = head;
        while (refNode!= NULL)
        {
            cout << refNode->value << "  ";
            refNode = refNode->node;
        }
    }
    cout<< endl;
}
void stackUsingLinkedList::peek()
{
    if (head == NULL)
    {
        cout << "the stack is empty " << endl;
        return;
    }
    else
    {
        cout << head->value << "  ";
    }
    cout<< endl;
}


stackUsingLinkedList::~stackUsingLinkedList()
{
    //delete (head);
}
int main()
{
    stackUsingLinkedList stack = stackUsingLinkedList(11);
    stack.push(32);
    stack.push(23);
    stack.push(1);
    stack.pop();
    stack.pop();
    stack.peek();
    stack.pop();
    stack.printStack();
    return 0;
}

