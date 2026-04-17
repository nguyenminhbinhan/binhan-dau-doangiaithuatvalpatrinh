class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int dem = 0;
        for (auto &w : words) {
            if (w.rfind(pref, 0) == 0) { 
                dem++;
            }
        }
        return dem;
    }
};
