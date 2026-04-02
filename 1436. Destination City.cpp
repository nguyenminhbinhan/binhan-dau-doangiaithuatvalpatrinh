class Solution {
    public:
        string destCity(vector<vector<string>>& paths) {
            unordered_set<string> xuat_phat;
            for (auto& p : paths) {
                xuat_phat.insert(p[0]);
            }
            for (auto& p : paths) {
                if (!xuat_phat.count(p[1])) {
                    return p[1];
                }
            }
            return "";
        }
    };