class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        if (abs(lh - rh) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};