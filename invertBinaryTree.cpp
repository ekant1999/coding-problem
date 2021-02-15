
recursive-

void invertBinaryTree(BinaryTree *tree) {
  // Write your code here.
    if(tree == NULL) {
        return;
    }
    BinaryTree* temp = tree -> left;
    tree -> left = tree -> right;
    tree -> right = temp;
    invertBinaryTree(tree -> left);
    invertBinaryTree(tree -> right);
}


//Non-Recursive

void invertTree(BinaryTree* root) {
    std::stack<BinaryTree*> stk;
    stk.push(root);
    
    while (!stk.empty()) {
        BinaryTree* p = stk.top();
        stk.pop();
        if (p) {
            stk.push(p->left);
            stk.push(p->right);
            std::swap(p->left, p->right);
        }
    }
}
