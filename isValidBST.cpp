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
    
    bool isValidBSTHelper(TreeNode* root,  pair<long long,long long> upperLower)
    {
        if(root==NULL)
        {
            return true;
        }
        
        if(root->val <= upperLower.first or root->val >= upperLower.second)
            return false;
        
        return (isValidBSTHelper(root->left, {upperLower.first,root->val}) && isValidBSTHelper(root->right, {root->val , upperLower.second}));
      
    }
    
    bool isValidBST(TreeNode* root) {
        pair<long long,long long> currentUpperLower= {LONG_MIN,LONG_MAX};
        
        return isValidBSTHelper(root, currentUpperLower);
    }
    
};
