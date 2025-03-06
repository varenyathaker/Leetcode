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
        long long prev = LLONG_MIN; 
        bool isValidBST(TreeNode* root) {
            if(!root) return true;
            if(!isValidBST(root->left)) return false; 
            //inorder; 
            if(root->val <= prev) return false; 
            prev = root->val; 
            return isValidBST(root->right); 
            
            
        }
    };
    