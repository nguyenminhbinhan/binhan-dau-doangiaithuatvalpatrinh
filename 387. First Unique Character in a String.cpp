class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> dem(26, 0);
        
        for (char c : s) {
            dem[c - 'a']++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (dem[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};