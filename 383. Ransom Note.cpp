class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> dem(26, 0);
        
        for (char c : magazine) {
            dem[c - 'a']++;
        }
        
        for (char c : ransomNote) {
            if (dem[c - 'a'] == 0) return false;
            dem[c - 'a']--;
        }
        
        return true;
    }
};