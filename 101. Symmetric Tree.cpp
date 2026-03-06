class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return laGuong(root->left, root->right);
    }
    
    bool laGuong(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr) return true;
        if (a == nullptr || b == nullptr) return false;
        if (a->val != b->val) return false;
        
        return laGuong(a->left, b->right) && laGuong(a->right, b->left);
    }
};