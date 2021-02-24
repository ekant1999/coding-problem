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
        int minimumDepth = 1;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=0,n=q.size();i<n;i++){
                TreeNode* p = q.front();
                q.pop();
                if(p->left==NULL && p->right==NULL) return minimumDepth;
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            minimumDepth++;
        }
        return minimumDepth;
    }
};
