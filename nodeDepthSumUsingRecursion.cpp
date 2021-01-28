using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = NULL;
		right= NULL;
	}
};
int nodeDepthHelper(BinaryTree *root, int level)
{
	if(!root)
			return 0;
	int leftDepth=nodeDepthHelper(root->left,level+1);
	int rightDepth=nodeDepthHelper(root->right,level+1);
	return level+ leftDepth + rightDepth;
  }

int nodeDepths(BinaryTree *root) {
	int level=0;
	return nodeDepthHelper(root,level);
}
