class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* goc) {
            vector<int> ketQua;
            duyet(goc, ketQua);
            return ketQua;
        }
        
        void duyet(TreeNode* nut, vector<int>& ketQua) {
            if (nut == nullptr) return;
            duyet(nut->left, ketQua);      
            duyet(nut->right, ketQua);       
            ketQua.push_back(nut->val);       
        }
    };