class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> ds;
        
        for (int i = 0; i < n; i++) {
            ds.push_back({heights[i], names[i]});
        }
        
        sort(ds.begin(), ds.end(), [](auto &a, auto &b) {
            return a.first > b.first; // sắp xếp giảm dần theo chiều cao
        });
        
        vector<string> ket_qua;
        for (auto &p : ds) {
            ket_qua.push_back(p.second);
        }
        
        return ket_qua;
    }
};