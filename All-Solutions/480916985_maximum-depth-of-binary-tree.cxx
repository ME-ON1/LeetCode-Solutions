id = 480916985 
lang = cpp 
runtime  = 4 ms 
memory = 18.8 MB
title_slug = maximum-depth-of-binary-tree
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
    int maxDepth(TreeNode* root) {
        if(root == NULL ) {
            return 0 ;
        }
        if(root->left ==NULL && root->right == NULL ){
            return 1 ; 
        }
        if(root->left == NULL) {
            return maxDepth(root->right ) +1  ;
        }
        if(root->right == NULL ){
            return maxDepth(root->left) + 1; 
        }
        return max(maxDepth(root->left),maxDepth(root->right )) + 1 ; 
    }
};