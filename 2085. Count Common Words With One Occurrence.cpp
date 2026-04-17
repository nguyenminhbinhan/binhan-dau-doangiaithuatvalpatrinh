class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> dem1, dem2;
        
        for (auto &w : words1) dem1[w]++;
        for (auto &w : words2) dem2[w]++;
        
        int ket_qua = 0;
        for (auto &p : dem1) {
            if (p.second == 1 && dem2[p.first] == 1) {
                ket_qua++;
            }
        }
        
        return ket_qua;
    }
};
