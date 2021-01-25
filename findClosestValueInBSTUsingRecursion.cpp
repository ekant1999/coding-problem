class BST {
public:
  int value;
  BST *left;
  BST *right;
  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBSTHelper(BST *tree, int target, int ans)
{
if(tree==NULL)
	return -1;
if(tree->value==target)
	return target;
if(abs(ans -target) >= abs(target-tree->value)){
ans = tree->value;
}
if(tree->value > target && tree->left!=NULL)
	return findClosestValueInBSTHelper(tree->left,target,ans);	
else if(tree->value <target && tree->right!=NULL)
		return findClosestValueInBSTHelper(tree->right,target,ans);
return ans;								 
}
int findClosestValueInBst(BST *tree, int target) {
	return findClosestValueInBSTHelper(tree,target,tree->value);
}
