class Solution {
public:
    bool balanced = true;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        if (abs(lh - rh) > 1)
            balanced = false;

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        return balanced;
    }
};