class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        int dem = 0;
        while (i >= 0 && s[i] != ' ') {
            dem++;
            i--;
        }
        return dem;
    }
};