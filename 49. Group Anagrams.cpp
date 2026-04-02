class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& ds_tu) {
        unordered_map<string, vector<string>> nhom;
        
        for (string tu : ds_tu) {
            string khoa = tu;
            sort(khoa.begin(), khoa.end()); // sap xep ky tu lam khoa
            nhom[khoa].push_back(tu);
        }
        
        vector<vector<string>> ket_qua;
        for (auto &cap : nhom) {
            ket_qua.push_back(cap.second);
        }
        
        return ket_qua;
    }
};