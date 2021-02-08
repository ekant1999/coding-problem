#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;
struct Node
{
    int value;
    Node *leftNode;
    Node *rightNode;

    Node(int val)
    {
        this->value = val;
        this->leftNode = this->rightNode = nullptr;
    }
};

void iterativeInorder(Node *root)
{

    stack<Node *> iterativeStack;
    if (root == nullptr)
    {
        cout << "tree is empty traversal is not possible" << endl;
    }
    while (true)
    {
        while (root != nullptr)
        {
            iterativeStack.push(root);
            root = root->leftNode;
        }
        if (iterativeStack.empty())
        {
            break;
        }
        root = iterativeStack.top();
        iterativeStack.pop();
        cout << root->value << "  ";
        root = root->rightNode;
    }
}

int main()
{

    Node *root = new Node(12);
    root->leftNode = new Node(2);
    root->rightNode = new Node(3);
    root->leftNode->leftNode = new Node(4);
    root->leftNode->rightNode = new Node(5);
    root->rightNode->rightNode = new Node(6);

    iterativeInorder(root);

    return 0;
}
