class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ketQua;
        duyet(root, ketQua);
        return ketQua;
    }
    
    void duyet(TreeNode* node, vector<int>& ketQua) {
        if (node == nullptr) return;
        duyet(node->left, ketQua);
        ketQua.push_back(node->val);
        duyet(node->right, ketQua);
    }
};