class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size()) {
                return false;
            }
    
            string order = "";
            int number;
    
           
            for (int i = 0; i < s.size(); i++) {
                number = t.find(s[i]);
    
                if (number == -1) {
                    return false; 
                }
    
                order += t[number]; 
                t.erase(t.begin() + number); 
            }
            return order == s;
        }
    };