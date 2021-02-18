
 
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *getNode(int value);
};

Node *getNode(int value)
{
    Node *node = new Node();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
// PreOrder traversal of the binary tree where NULL values are replaced with the "X"
// if the node value is NULL we will return the function call. 
// i.e node will return to the root.
string Serialize(Node *root)
{
    if (root == NULL)
        return "X";

    string leftSerialize = Serialize(root->left);
    string righttSerialize = Serialize(root->right);
    return (to_string(root->data) + " " + leftSerialize + " " + righttSerialize);
}

int main()
{
    Node *root = getNode(1);
    root->left = getNode(2);
    root->right = getNode(3);
    root->right->left = getNode(4);
    root->right->right = getNode(5);
    string serialize = Serialize(root);
    cout << serialize;
    return 0;
}
