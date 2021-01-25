class BST {
public:
  int value;
  BST *left;
  BST *right;
  BST(int val);
  BST &insert(int val);
};
int findClosestValueInBst(BST *tree, int K) {
	int minDiff= INT_MAX, ans = -1;
	// BST *close;
  if(tree==NULL)
  		return -1;
	while(tree != NULL)
	{
		if(minDiff > abs((tree -> value) - K)) {
			ans = tree -> value;
			minDiff = abs((tree -> value) - K);
		}
		if(tree -> value > K){
			tree = tree->left;
		}
		else if (tree->value < K){		
				tree = tree->right;
		}
		else if(tree->value == K){
			return K;
		}
		
	}
	return ans;
}
  if (tree === null) {
    return closest
  } 
  else {
    if (abs(tree.val - target) < .abs(closest - target)) {
      closest = tree.val
    }
    if (target < tree.val) {
      return findClosestVal(tree.left, target, closest)
    } else {
      return findClosestVal(tree.right, target, closest)
  }
}
