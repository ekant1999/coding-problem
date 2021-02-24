#include <queue> 
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
    
    int minDepthHelper(TreeNode* root, unordered_map<TreeNode*,int> & DepthValuePair)
    {
        if(root==NULL)
            return 0;
        TreeNode* refRoot= root;
        queue<TreeNode*> Queue; 
        Queue.push(refRoot);
        int depth=1;
        DepthValuePair[refRoot]=depth;
        while(refRoot!=NULL)
        {
        if(refRoot->left==NULL and refRoot->right==NULL)
        {
            cout<<"return from first";
            return DepthValuePair[refRoot];
        }
        if(refRoot->left!=NULL and refRoot->right!=NULL){
             Queue.push(refRoot->left);
            DepthValuePair[refRoot->left]=DepthValuePair[refRoot]+1;
             Queue.push(refRoot->right);
            DepthValuePair[refRoot->right]=DepthValuePair[refRoot]+1;
        }
            if(refRoot->left!=NULL and refRoot->right==NULL){
             Queue.push(refRoot->left);
            DepthValuePair[refRoot->left]=DepthValuePair[refRoot]+1;
        }
            if(refRoot->left==NULL and refRoot->right!=NULL){
             Queue.push(refRoot->right);
             DepthValuePair[refRoot->right]=DepthValuePair[refRoot]+1;
        }
            depth++;
            refRoot= Queue.front();
            Queue.pop();
        }
        return depth;
    }
    int minDepth(TreeNode* root) {
         unordered_map<TreeNode*,int> DepthValuePair;
     return minDepthHelper(root, DepthValuePair);   
    }
};



//solution without hashmap

class Solution {
public:
    
   int minDepth(TreeNode* root) {
    if (root == NULL) return 0;
    queue<TreeNode*> Q;
    Q.push(root);
    int i = 0;
    while (!Q.empty()) {
        i++;
        int k = Q.size();
        for (int j=0; j<k; j++) {
            TreeNode* rt = Q.front();
            if (rt->left) Q.push(rt->left);
            if (rt->right) Q.push(rt->right);
            Q.pop();
            if (rt->left==NULL && rt->right==NULL) return i;
        }
    }
    return -1;
}};
