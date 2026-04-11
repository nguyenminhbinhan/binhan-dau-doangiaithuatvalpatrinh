class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> dem(26, 0);
        
        for (char c : s) {
            dem[c - 'a']++;
        }
        
        int tan_so = 0;
        for (int x : dem) {
            if (x > 0) {
                if (tan_so == 0) tan_so = x;
                else if (x != tan_so) return false;
            }
        }
        
        return true;
    }
};