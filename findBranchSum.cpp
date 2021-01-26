/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int targetSum)
{
        return(findPathSum(root,0, targetSum));
    }
    
bool findPathSum(TreeNode *root, int currentSum, int targetSum)
{
	if(root==NULL)
		return false;
	
	currentSum+= root->val;
	if(root->left==NULL and root->right==NULL and currentSum==targetSum)
	{
		return true;
	}
	return (findPathSum(root->left,currentSum,targetSum) || findPathSum(root->right,currentSum,targetSum));
}
};
