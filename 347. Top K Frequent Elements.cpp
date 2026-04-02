class Solution {
public:
    vector<int> topKFrequent(vector<int>& mang, int k) {
        // B1: dem tan suat
        unordered_map<int,int> dem;
        for (int x : mang) {
            dem[x]++;
        }
        
        // B2: tao bucket, chi so la tan suat
        int n = mang.size();
        vector<vector<int>> bucket(n+1);
        for (auto &cap : dem) {
            int gia_tri = cap.first;
            int tan_suat = cap.second;
            bucket[tan_suat].push_back(gia_tri);
        }
        
        // B3: duyet bucket tu tan suat cao xuong
        vector<int> ket_qua;
        for (int i = n; i >= 0 && (int)ket_qua.size() < k; i--) {
            for (int gia_tri : bucket[i]) {
                ket_qua.push_back(gia_tri);
                if ((int)ket_qua.size() == k) break;
            }
        }
        
        return ket_qua;
    }
};