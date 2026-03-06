class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        queue<TreeNode*> hang;
        hang.push(root);
        int doSau = 0;
        
        while (!hang.empty()) {
            int kichThuoc = hang.size();
            for (int i = 0; i < kichThuoc; i++) {
                TreeNode* node = hang.front();
                hang.pop();
                if (node->left != nullptr) hang.push(node->left);
                if (node->right != nullptr) hang.push(node->right);
            }
            doSau++;
        }
        
        return doSau;
    }
};