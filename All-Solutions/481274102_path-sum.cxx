id = 481274102 
lang = cpp 
runtime  = 0 ms 
memory = 21.3 MB
title_slug = path-sum
code =

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL ) {
            return 0;
        }
        if(root->left == NULL &&  root->right == NULL && targetSum - root->val == 0  ) {
                return 1 ;
        }
                
        bool u = hasPathSum(root->left , targetSum - root->val) || hasPathSum(root->right , targetSum - root->val ) ;
        
        return u ;
    }
};