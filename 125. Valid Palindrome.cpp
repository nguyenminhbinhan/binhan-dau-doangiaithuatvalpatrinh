class Solution {
    public:
        bool isPalindrome(string chuoi) {  
            int trai = 0, phai = chuoi.size() - 1;
            
            while (trai < phai) {
                while (trai < phai && !isalnum(chuoi[trai])) trai++;
                while (trai < phai && !isalnum(chuoi[phai])) phai--;
                
                if (tolower(chuoi[trai]) != tolower(chuoi[phai])) {
                    return false;
                }
                
                trai++;
                phai--;
            }
            
            return true;
        }
    };