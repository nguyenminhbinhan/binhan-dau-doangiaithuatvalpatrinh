class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> dem(26, 0);
        
        for (char c : s) dem[c - 'a']++;
        for (char c : t) {
            dem[c - 'a']--;
            if (dem[c - 'a'] < 0) return c;
        }
        return ' '; 
    }
};